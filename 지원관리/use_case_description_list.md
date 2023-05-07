### Sub System : 지원 관리

use case description : 지원 정보 조회

| Actor Action | System Response |
| --- | --- |
| 1. 일반 회원이 본인의 지원 정보 요청 | 2. 회사이름, 업무, 인원수, 신청 마감일을 포함한 정보를 회사이름의 오름차순으로 정렬해서 출력 |

use case description : 지원 취소

| Actor Action | System Response |
| --- | --- |
| 1. 없음 | 2. 지원 정보 출력 |
| 3. 리스트 중 마감일이 지나지 않은 취소할 지원 정보 선택 후 취소 요청 | 4. 선택한 지원 정보를 취소할지 확인 요청 |
| 5. 지원 취소를 그대로 진행할지 선택 | 6. 지원 취소 요청의 결과를 일반회원에게 알림 |

use case description : 지원 정보 삭제

| Actor Action | System Response |
| --- | --- |
| 1. 없음 | 2. 지원 정보 출력 |
| 3. 리스트 중 마감일이 지난 삭제할 지원 정보 선택 후 삭제 요청 | 4. 선택한 지원 정보를 삭제할지 확인 요청 |
| 5. 지원 정보 삭제를 그대로 진행할지 선택 | 6. 지원 정보 삭제 요청에 대한 결과를 일반 회원에게 알림 |

use case description : 회사 회원 통계 조회

| Actor Action | System Response |
| --- | --- |
| 1. 회사 회원이 지원 정보 통계 요청 | 등록한 채용정보에 대해 업무별 지원자 수를 출력 |

use case description : 일반 회원 통계 조회
| Actor Action | System Response |
| --- | --- |
| 1. 일반 회원이 지원 정보 통계 요청 | 본인의 지원정보에 대해 마감시간 기준으로 월별 지원 횟수를 출력 |