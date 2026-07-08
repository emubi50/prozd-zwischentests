#include <stdio.h>

//function 1: print greatest lengths if modified or initialized
void print_l(int op_select, int* l_1, int* l_2,int* l_3) {
    if(op_select == 1 && *l_1 != -1) {
        printf("\nNew greatest length: %d", *l_1);
    }
    if(op_select == 2 && *l_2 != -1) {
        printf("\nNew second greatest length: %d", *l_2);
    }
    if(op_select == 3 && *l_3 != -1) {
        printf("\nNew third greatest length: %d", *l_3);
    }
}

//function 2: print greatest widths if modified or initialized
void print_w(int op_select, int* w_1, int* w_2, int* w_3) {
    if(op_select == 1 && *w_1 != -1) {
        printf("\nNew greatest width: %d", *w_1);
    }
    if(op_select == 2 && *w_2 != -1) {
        printf("\nNew second greatest width: %d", *w_2);
    }
    if(op_select == 3 && *w_3 != -1) {
        printf("\nNew third greatest width: %d", *w_3);
    }
}

//function 3: check if the input length is greater than one of the top three lengths
void compare_new_length(int length_zero, int* l_1, int* l_2, int* l_3) {
    if(*l_1 == -1) {
        *l_1 = length_zero;
        print_l(1, l_1, l_2, l_3);
    } else if(length_zero > *l_1) {
        *l_3 = *l_2;
        *l_2 = *l_1;
        *l_1 = length_zero;
        print_l(1, l_1, l_2, l_3);
    } else if(*l_2 == -1) {
        *l_2 = length_zero;
        print_l(2, l_1, l_2, l_3);
    } else if(length_zero > *l_2) {
        *l_3 = *l_2;
        *l_2 = length_zero;
        print_l(2, l_1, l_2, l_3);
    } else if(*l_3 == -1 || length_zero > *l_3) {
        *l_3 = length_zero;
        print_l(3, l_1, l_2, l_3);
    }
}

//function 4: check if the input width is greater than one of the top three widths
void compare_new_width(int width_zero, int* w_1, int* w_2, int* w_3) {
    if(*w_1 == -1) {
        *w_1 = width_zero;
        print_w(1, w_1, w_2, w_3);
    } else if(width_zero > *w_1) {
        *w_3 = *w_2;
        *w_2 = *w_1;
        *w_1 = width_zero;
        print_w(1, w_1, w_2, w_3);
    } else if(*w_2 == -1) {
        *w_2 = width_zero;
        print_w(2, w_1, w_2, w_3);
    } else if(width_zero > *w_2) {
        *w_3 = *w_2;
        *w_2 = width_zero;
        print_w(2, w_1, w_2, w_3);
    } else if(*w_3 == -1 || width_zero > *w_3) {
        *w_3 = width_zero;
        print_w(3, w_1, w_2, w_3);
    }
}

//function 5: request input of length and width,
//calculate and print calculated area,
//pass length and width to functions 3 and 4
void length_width(int* l_1, int* l_2, int* l_3, int* w_1, int* w_2, int* w_3) {
    int length, width;
    int area;

    printf("\nEnter length,width: ");
    scanf("%d,%d", &length, &width);

    if(length <= 0 || width <= 0) {
        printf("\nInvalid length or width");
        if(length > 0) {
            compare_new_length(length, l_1, l_2, l_3);
        }
        if(width > 0) {
            compare_new_width(width, w_1, w_2, w_3);
        }
    } else {
        area = length * width;
        printf("\nArea: %d", area);
        compare_new_length(length, l_1, l_2, l_3);
        compare_new_width(width, w_1, w_2, w_3);
    }
}

//function 6: calculate the three biggest areas
//by multiplying the top three lengths with the top three widths
//print average of the three biggest areas
void biggest_areas(int* l_1, int* l_2, int* l_3, int* w_1, int* w_2, int* w_3, int* a_1, int* a_2, int* a_3) {
    double avg = 0;
    printf("\nBiggest areas");

    if(*l_1 == -1 || *w_1 == -1) {
        printf("\nNo areas yet");
    } else {
        if(*l_1 > -1 && *w_1 > -1) {
            *a_1 = *l_1 * *w_1,
            printf("\nArea: %d", (int) *a_1);
            avg = *a_1 / 1.0;
        }
        if(*l_2 > -1 && *w_2 > -1) {
            *a_2 = *l_2 * *w_2;
            printf("\nArea: %d", (int) *a_2);
            avg = (*a_1 + *a_2) / 2.0;
        }
        if(*l_3 > -1 && *w_3 > -1) {
            *a_3 = *l_3 * *w_3;
            printf("\nArea: %d", (int) *a_3);
            avg = (*a_1 + *a_2 + *a_3) / 3.0;
        }
        printf("\nAverage area: %.2f", avg);
    }
}

int main() {
    //define "global" variables
    //value "-1" used to indicate that the variable is declared, but "not initialized"
    int length_one = -1, length_two = -1, length_three = -1;
    int width_one = -1, width_two = -1, width_three = -1;
    int area_one = -1, area_two = -1, area_three = -1;

    
    //no global variables --> local variable in main + pointers (src: Eigenstudium J)
    int* l_1 = &length_one; int* l_2 = &length_two; int* l_3 = &length_three;
    int* w_1 = &width_one; int* w_2 = &width_two; int* w_3 = &width_three;
    int* a_1 = &area_one; int* a_2 = &area_two; int* a_3 = &area_three;

    //while loop to continue the program running until "x"
    char select;
    while(select != 'x') {
        printf("\nEnter n, t OR x: ");
            scanf(" %c", &select);
            switch(select) {
                case 'n':
                    length_width(l_1, l_2, l_3, w_1, w_2, w_3);
                    break;
                case 't':
                    biggest_areas(l_1, l_2, l_3, w_1, w_2, w_3, a_1, a_2, a_3);
                    break;
                case 'x':
                    biggest_areas(l_1, l_2, l_3, w_1, w_2, w_3, a_1, a_2, a_3);
                    break;
            }
    }

    return 0;
}
