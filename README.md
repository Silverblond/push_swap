*This project has been created as part of the 42 curriculum by dkim*

# Title
Push_Swap

## Description
이 프로젝트는 제한된 명령어 집합만을 사용하여 스택 a의 정수들을 오름차순으로 정렬하는 프로그램입니다. 기수 정렬(Radix Sort) 알고리즘 기반으로 구현하였습니다.

## Algorithm
- 2~5개 : 하드코딩(sort_2, sort_3, sort_5)
- 기수 정렬은 무조건 (비트수 x 전체 원소 수) 만큼 순회
- 6개 이상 : 기수 정렬 (Radix Sort) + 좌표 압축

## Instructions
- 컴파일
```bash
#컴파일
make

#리컴파일
make re
```

- 실행
```bash
./push_swap [정렬할 정수들]
```

- 예시
```bash
./push_swap 3 1 2
```
```bash
./push_swap "5 4 3 2 1"
```
```bash
./push_swap 1 5 3 "4 6 2" 9
```

- 검증
```bash
ARG="3 1 2"; ./push_swap $ARG | ./checker_OS $ARG
```

- 정리
```bash
make clean
make fclean
```

## Resources

### 참고문헌

- [Push Swap Visualizer](https://windowdong11.github.io/push_swap_visualizer/)
- [Radix Sort - Wikipedia](https://en.wikipedia.org/wiki/Radix_sort)
- [좌표 압축](https://wikidocs.net/214469)

### AI 활용
- 알고리즘 설계 및 구현 방향 결정
- 코드 디버깅 및 로직 검증
- 개념 학습 (기수 정렬, 비트 연산, 좌표 압축 등)