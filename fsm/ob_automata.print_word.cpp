#include <stdio.h>

class StateMachine{
    enum states{before = 0, inside = 1, after = 2}state;

    struct branch {
        unsigned char new_state:2;
        unsigned char should_putchar:1;
    };
    static struct branch the_table[3][3];
public:
    StateMachine():state(before){}
    void FeedChar(int c){
        int idx2 = (c == ' ')? 0:(c == '\n')? 1 : 2;
        struct branch *b = &the_table[state][idx2];
        state = (enum states)(b->new_state);
        if (b->should_putchar) putchar(c);
    }
};

struct StateMachine::branch StateMachine::the_table[3][3] = {
            /*' '         '\n'        others */
/*before */{{before,0}, {before,1}, {inside, 1}},
/*inside */{{after, 0}, {before,1}, {inside, 1}},
/*after */ {{after, 0}, {before,1}, {after, 0}}
};

int main(void)
{
    int c;
    StateMachine machine;
    while ((c = getchar()) != EOF){
        machine.FeedChar(c);
    }
    return 0;
}
