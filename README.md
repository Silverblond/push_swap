push_swap/
├── Makefile
├── push_swap.h
└── srcs/
    ├── main.c              (1개)
    │
    ├── parse/
    │   ├── parse.c         (parse, parse_push) 2개
    │   ├── validate.c      (is_valid_int, ft_atol, is_duplicate) 3개
    │   └── error.c         (error_exit) 1개
    │
    ├── stack/
    │   ├── stack_init.c    (new_stack, push_node, free_stack) 3개
    │   └── stack_utils.c   (is_sorted, set_index) 2개
    │
    ├── operations/
    │   ├── op_swap.c       (do_sa, do_sb, do_ss) 3개
    │   ├── op_push.c       (do_pa, do_pb) 2개
    │   ├── op_rotate.c     (do_ra, do_rb, do_rr) 3개
    │   └── op_rrotate.c    (do_rra, do_rrb, do_rrr) 3개
    │
    └── sort/
        ├── sort_small.c    (sort_2, sort_3) 2개
        ├── sort_five.c     (sort_5, find_min) 2개
        └── sort_radix.c    (sort_radix, get_max_bits) 2개

1. 문자열 파싱 역순으로 넣기
2. 오퍼 함수 연결해서 테스트
3. 알고리즘 구현
4. 알고리즘 테스트