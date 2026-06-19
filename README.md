# HW10 — 모듈 & 플러그인 실습

언리얼 엔진 5.5 기반 Third Person 프로젝트. 보조 모듈과 독립 플러그인을 수동으로 생성하고 연결하는 과정을 실습.

## 구현 기능

### 필수 기능
- `Test` 모듈 생성 및 주 모듈(HW10)과 연결
- `Test` 모듈 안에 `TestActor` 생성, 캐릭터에서 스폰
- `Temporary` 플러그인 수동 생성 및 등록, `StartupModule` 동작 확인

### 도전 기능
- `Test` 모듈 안에 `UCharacterData`(UObject) 생성, 캐릭터에서 데이터 출력

## 클래스 구조

| 클래스 | 모듈 | 역할 |
|--------|------|------|
| `ATestActor` | Test | 스폰 확인용 액터. BeginPlay에서 로그 출력 |
| `UCharacterData` | Test | 캐릭터 데이터 저장용 UObject. 체력/공격력/이동속도 보유 |
| `FTemporaryModule` | Temporary (플러그인) | 플러그인 모듈 인터페이스. StartupModule/ShutdownModule 구현 |

## 실행 방법

1. `.uproject` 우클릭 → **Generate Visual Studio project files**
2. Visual Studio 또는 Rider에서 **Development Editor / Win64** 로 빌드
3. 에디터에서 Play 실행 후 Output Log에서 로그 확인

## 주요 학습 내용

- 모듈과 플러그인의 차이 (코드 단위 vs 재사용 패키지)
- 모듈 등록 두 곳: `Target.cs`(빌드) + `.uproject`(로드)
- 모듈 간 참조 시 `Build.cs`에 의존성 추가 필요
- `IMPLEMENT_MODULE` vs `IMPLEMENT_PRIMARY_GAME_MODULE`
- `IModuleInterface` 상속으로 `StartupModule`/`ShutdownModule` 구현
- Public / Private Dependency 차이
