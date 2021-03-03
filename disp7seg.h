#ifndef DISP7SEG
#define DISP7SEG

void disp7seg_init (void);
void display7seg (char c);

struct display7seg_T
{
    void (*init)  (void);
    void (*print) (char c); 
} d7seg = { disp7seg_init, display7seg };


#endif