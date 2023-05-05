// TODO :

li t0, 16\n\t;
addi %[lw_cnt], 1\n\t;
loop_label:

    lw t1, %[h]\n\t;
    lw t2, %[x]\n\t;
    addi %[lw_cnt], 2\n\t;

    add t3, t1, t2\n\t;

    sw %[y], t3\n\t;
    addi %[sw_cnt], 1\n\t;

    addi %[y], 4\n\t;
    addi %[h], 4\n\t;
    addi %[x], 4\n\t;
    
    addi t0, t0, -1\n\t;
    
    addi %[arith_cnt], 5\n\t;

addi %[others_cnt], 1\n\t;
bnez t0 loop_label\n\t;
