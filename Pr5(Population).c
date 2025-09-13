#include<stdio.h>
int main()
{
    double wp,mp,tlp,lwp,lmp,ilmp,ilwp,tp=1441981744,twp,tmp,pwp;
    twp = (tp*48.4)/100;
    printf("The total women population is : %lf\n",twp);
    tmp = tp-twp;
    printf("The total men population is : %lf\n",tmp);
    tlp = (tp*85.95)/100;
    printf("The total literate population is : %lf\n",tlp);
    lmp= (tmp*80.95)/100;
    printf("The total literate men population is : %lf\n",lmp);
    lwp= (twp*62.84)/100;
    printf("The total literate women population is : %lf\n",lwp);
    ilmp= tmp-lmp;
    printf("The total illiterate men population is : %lf\n",ilmp);
    ilwp= twp-lwp;
    printf("The total illiterate women population is : %lf\n",ilwp);
    return 0;


}
