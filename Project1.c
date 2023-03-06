#include<stdio.h>
#include<time.h>
int main()
{

    int signal,quantity,potato_unit=0,tomato_unit=0,apple_unit=0,orange_unit=0;
    int chicken_unit=0,beef_unit=0,salmon_unit=0;
    int rice_unit=0,oil_unit=0,lentil_unit=0;
    int bodylo_unit=0,perfume_unit=0,soap_unit=0;
    int darkCho_unit=0,cake_unit=0,rosogolla_unit=0;
    int tea_unit=0,coffee_unit=0,biscuit_unit=0;
    int toys_unit=0,diaper_unit=0,babyFood_unit=0;
    int shirt_unit=0,scarf_unit=0,payjama_unit=0;
    int birthday_unit=0,anniversary_unit=0,special_unit=0;
    int pen_unit=0,pencil_unit=0,colours_unit=0;

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    float total=0,potato_price=0,tomato_price=0,apple_price=0,orange_price=0;
    float chicken_price=0,beef_price=0,salmon_price=0;
    float rice_price=0,oil_price=0,lentil_price=0;
    float bodylo_price=0,perfume_price=0,soap_price=0;
    float darkCho_price=0,cake_price=0,rosogolla_price=0;
    float tea_price=0,coffee_price=0,biscuit_price=0;
    float toys_price=0,diaper_price=0,babyFood_price=0;
    float shirt_price=0,scarf_price=0,payjama_price=0;
    float birthday_price=0,anniversary_price=0,special_price=0;
    float pen_price=0,pencil_price=0,colours_price=0;


    printf("\n");
    printf("-------------------------------------------\n");
    printf("| If you want to order press it's SI No   |\n");
    printf("| Press 0 when you want to end your order |\n");
    printf("-------------------------------------------\n\n");



    printf("                      SUPER SHOP                    \n");
    printf("----------------------------------------------------\t----------------------------------------------------\n");
    printf("|          BLOCK - 'A' [Vegetables & Fruits]       |\t|\t\tBLOCK - 'B' [Grocery Item]  \t   |\n");
    printf("|--------------------------------------------------|\t|--------------------------------------------------|\n");
    printf("| SI No | Product Name |  Unit  | Product's Price  |\t| SI No | Product Name |  Unit  | Product's Price  |\n");
    printf("|--------------------------------------------------|\t|--------------------------------------------------|\n");
    printf("|   1   |     Potato   |  1kg   |        30tk      |\t|   4   |     Rice     |  1kg   |        50tk      |\n");
    printf("|--------------------------------------------------|\t|--------------------------------------------------|\n");
    printf("|   2   |     Tomato   |  1kg   |        60tk      |\t|   5   |     Oil      |  1li   |       200tk      |\n");
    printf("|--------------------------------------------------|\t|--------------------------------------------------|\n");
    printf("|   3   |     Apple    |  1kg   |       180tk      |\t|   6   |     Lentil   |  1kg   |       130tk      |\n");
    printf("----------------------------------------------------\t----------------------------------------------------\n\n");

    printf("----------------------------------------------------\t----------------------------------------------------\n");
    printf("|             BLOCK - 'C' [Fish & Meat]            |\t|\t\tBLOCK - 'D' [Cosmetics]  \t   |\n");
    printf("|--------------------------------------------------|\t|--------------------------------------------------|\n");
    printf("| SI No | Product Name |  Unit  | Product's Price  |\t| SI No | Product Name |  Unit  | Product's Price  |\n");
    printf("|--------------------------------------------------|\t|--------------------------------------------------|\n");
    printf("|   7   |    Chicken   |  1kg   |      185tk       |\t|   10  | Body Lotion  |  1pc   |       210tk      |\n");
    printf("|--------------------------------------------------|\t|--------------------------------------------------|\n");
    printf("|   8   |    Beef      |  1kg   |      250tk       |\t|   11  |    Perfume   |  1pc   |       340tk      |\n");
    printf("|--------------------------------------------------|\t|--------------------------------------------------|\n");
    printf("|   9   |    Salmon    |  1kg   |      750tk       |\t|   12  |     Soap     |  1pc   |        65tk      |\n");
    printf("----------------------------------------------------\t----------------------------------------------------\n");
    
    printf("----------------------------------------------------\t----------------------------------------------------\n");
    printf("|             BLOCK - 'E' [Sweets]                 |\t|\t\tBLOCK - 'F' [Snacks]     \t   |\n");
    printf("|--------------------------------------------------|\t|--------------------------------------------------|\n");
    printf("| SI No | Product Name |  Unit  | Product's Price  |\t| SI No | Product Name |  Unit  | Product's Price  |\n");
    printf("|--------------------------------------------------|\t|--------------------------------------------------|\n");
    printf("|  13   |Dark Chocolate|  1kg   |      900tk       |\t|  16   |     Tea      |  1pk   |        20tk      |\n");
    printf("|--------------------------------------------------|\t|--------------------------------------------------|\n");
    printf("|  14   |     Cake     |  1lb   |      700tk       |\t|  17   |    Coffee    |  1pk   |        30tk      |\n");
    printf("|--------------------------------------------------|\t|--------------------------------------------------|\n");
    printf("|  15   |  Rosogolla   |  1kg   |      350tk       |\t|  18   |    Biscuit   |  1kg   |       170tk      |\n");
    printf("----------------------------------------------------\t----------------------------------------------------\n\n");

    printf("----------------------------------------------------\t----------------------------------------------------\n");
    printf("|             BLOCK - 'G' [Baby Corner]            |\t|\t\tBLOCK - 'H' [Cloths]     \t   |\n");
    printf("|--------------------------------------------------|\t|--------------------------------------------------|\n");
    printf("| SI No | Product Name |  Unit  | Product's Price  |\t| SI No | Product Name |  Unit  | Product's Price  |\n");
    printf("|--------------------------------------------------|\t|--------------------------------------------------|\n");
    printf("|  19   |     Toys     |  1pc   |      110tk       |\t|   22  |     Shirt    |  1pc   |       600tk      |\n");
    printf("|--------------------------------------------------|\t|--------------------------------------------------|\n");
    printf("|  20   |    Diaper    |  1pc   |      240tk       |\t|   23  |     Scarf    |  1pc   |       220tk      |\n");
    printf("|--------------------------------------------------|\t|--------------------------------------------------|\n");
    printf("|  21   |   Baby Food  |  1pk   |      850tk       |\t|   24  |    Payjama   |  1pc   |       550tk      |\n");
    printf("----------------------------------------------------\t----------------------------------------------------\n");
    
    printf("----------------------------------------------------\t----------------------------------------------------\n");
    printf("|             BLOCK - 'I' [Gift]                   |\t|\t\tBLOCK - 'J' [Stationary] \t   |\n");
    printf("|--------------------------------------------------|\t|--------------------------------------------------|\n");
    printf("| SI No | Product Name |  Unit  | Product's Price  |\t| SI No | Product Name |  Unit  | Product's Price  |\n");
    printf("|--------------------------------------------------|\t|--------------------------------------------------|\n");
    printf("|  25   |   Birthday   |  1pk   |      790tk       |\t|   28  |      Pen     |  1pc   |        15tk      |\n");
    printf("|--------------------------------------------------|\t|--------------------------------------------------|\n");
    printf("|  26   |  Anniversay  |  1pk   |      890tk       |\t|   29  |     Pencil   |  1pc   |        10tk      |\n");
    printf("|--------------------------------------------------|\t|--------------------------------------------------|\n");
    printf("|  27   | Special Combo|  1pk   |      999tk       |\t|   30  |    Colours   |  1pk   |        50tk      |\n");
    printf("----------------------------------------------------\t----------------------------------------------------\n");
    
    //Calculation
    printf("\nEnter your choice = ");
    scanf("%d",&signal);

    if(signal==0)
    {
        printf("\nERROR!!\nYou haven't ordered anything\nPlease Order something");
    printf("\nEnter your choice = ");
    scanf("%d",&signal); 
    while (signal==0)
    {
        printf("\nERROR!!\nYou haven't ordered anything\nPlease Order something");
    printf("\nEnter your choice = ");
    scanf("%d",&signal);
        
    }
        
    }
if(signal!=0)
{
    while(signal!=0)
    {
        printf("\nEnter quantity = ");
        scanf("%d",&quantity);
     switch(signal)
    {
        default:
        printf("\nYou have entered wrong SI No which is not belongs to our product.\nPlease enter the right SI No");
        break;

        case 1:
        total=total+(30*quantity);
        potato_price=potato_price+(30*quantity);
        potato_unit=potato_unit+(1*quantity);
        break;

        case 2:
        total=total+(60*quantity);
        tomato_price=tomato_price+(60*quantity);
        tomato_unit=tomato_unit+(1*quantity);
        break;

        case 3:
        total=total+(180*quantity);
        apple_price=apple_price+(180*quantity);
        apple_unit=apple_unit+(1*quantity);
        break;

        case 4:
        total=total+(50*quantity);
        rice_price=rice_price+(50*quantity);
        rice_unit=rice_unit+(1*quantity);
        break;

        case 5:
        total=total+(200*quantity);
        oil_price=oil_price+(200*quantity);
        oil_unit=oil_unit+(1*quantity);
        break;

        case 6:
        total=total+(130*quantity);
        lentil_price=lentil_price+(130*quantity);
        lentil_unit=lentil_unit+(1*quantity);
        break;

        case 7:
        total=total+(185*quantity);
        chicken_price=chicken_price+(185*quantity);
        chicken_unit=chicken_unit+(1*quantity);
        break;

        case 8:
        total=total+(250*quantity);
        beef_price=beef_price+(250*quantity);
        beef_unit=beef_unit+(1*quantity);
        break;

        case 9:
        total=total+(750*quantity);
        salmon_price=salmon_price+(750*quantity);
        salmon_unit=salmon_unit+(1*quantity);
        break;

        case 10:
        total=total+(210*quantity);
        bodylo_price=bodylo_price+(210*quantity);
        bodylo_unit=bodylo_unit+(1*quantity);
        break;

        case 11:
        total=total+(340*quantity);
        perfume_price=perfume_price+(340*quantity);
        perfume_unit=perfume_unit+(1*quantity);
        break;

        case 12:
        total=total+(65*quantity);
        soap_price=soap_price+(65*quantity);
        soap_unit=soap_unit+(1*quantity);
        break;

        case 13:
        total=total+(900*quantity);
        darkCho_price=darkCho_price+(900*quantity);
        darkCho_unit=darkCho_unit+(1*quantity);
        break;

        case 14:
        total=total+(700*quantity);
        cake_price=cake_price+(700*quantity);
        cake_unit=cake_unit+(1*quantity);
        break;

        case 15:
        total=total+(350*quantity);
        rosogolla_price=rosogolla_price+(350*quantity);
        rosogolla_unit=rosogolla_unit+(1*quantity);
        break;

        case 16:
        total=total+(20*quantity);
        tea_price=tea_price+(20*quantity);
        tea_unit=tea_unit+(1*quantity);
        break;

        case 17:
        total=total+(30*quantity);
        coffee_price=coffee_price+(30*quantity);
        coffee_unit=coffee_unit+(1*quantity);
        break;

        case 18:
        total=total+(170*quantity);
        biscuit_price=biscuit_price+(170*quantity);
        biscuit_unit=biscuit_unit+(1*quantity);
        break;

        case 19:
        total=total+(110*quantity);
        toys_price=toys_price+(110*quantity);
        toys_unit=toys_unit+(1*quantity);
        break;

        case 20:
        total=total+(240*quantity);
        diaper_price=diaper_price+(240*quantity);
        diaper_unit=diaper_unit+(1*quantity);
        break;

        case 21:
        total=total+(850*quantity);
        babyFood_price=babyFood_price+(850*quantity);
        babyFood_unit=babyFood_unit+(1*quantity);
        break;

        case 22:
        total=total+(600*quantity);
        shirt_price=shirt_price+(600*quantity);
        shirt_unit=shirt_unit+(1*quantity);
        break;

        case 23:
        total=total+(220*quantity);
        scarf_price=scarf_price+(220*quantity);
        scarf_unit=scarf_unit+(1*quantity);
        break;

        case 24:
        total=total+(550*quantity);
        payjama_price=payjama_price+(550*quantity);
        payjama_unit=payjama_unit+(1*quantity);
        break;

        case 25:
        total=total+(790*quantity);
        birthday_price=birthday_price+(790*quantity);
        birthday_unit=birthday_unit+(1*quantity);
        break;

        case 26:
        total=total+(890*quantity);
        anniversary_price=anniversary_price+(890*quantity);
        anniversary_unit=anniversary_unit+(1*quantity);
        break;

        case 27:
        total=total+(999*quantity);
        special_price=special_price+(999*quantity);
        special_unit=special_unit+(1*quantity);
        break;

        case 28:
        total=total+(15*quantity);
        pen_price=pen_price+(15*quantity);
        pen_unit=pen_unit+(1*quantity);
        break;

        case 29:
        total=total+(10*quantity);
        pencil_price=pencil_price+(10*quantity);
        pencil_unit=pencil_unit+(1*quantity);
        break;

        case 30:
        total=total+(50*quantity);
        colours_price=colours_price+(50*quantity);
        colours_unit=colours_unit+(1*quantity);
        break;
    }

    //Taking signal
    printf("\nEnter your choice = ");
    scanf("%d",&signal);
    }

    //Printing output

    printf("\n\n\n\n\n\t\t\tToken NO-01\n");
    printf("\t\t   SUPER SHOP, Narayangong\n");
    printf("\t\t\tNarayangonj\n");
    printf("\t\t\tBangladesh\n");
    printf("\t\t   Phone#01969099512\n");
    printf("\t\tBIN: 002411475-8909 | SHUVO-4,5\n");
    printf("---------------------------------------------------------------------\n\n");
    printf("Table: BR-20\n");
    printf("                             Paid Bill                                \n");
    printf("Date: %d-%d-%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    printf("Time: %d:%d:%d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
    printf("                                                 CHALAN No:PB-N40816\n");
    printf("Paid\n");
    printf("--------------------------------------------------------------------\n");
    printf(" -Qty \tItem Name \t\t  Price \tT.Price\n");
    printf("--------------------------------------------------------------------\n");

    if(potato_price!=0)
    {
        printf(" -%dkg \tPotato   \t\t  30.00 \t%0.2f\n",potato_unit,potato_price);
    }
    
    if(tomato_price!=0)
    {
        printf(" -%dkg \tTomato   \t\t  60.00 \t%0.2f\n",tomato_unit,tomato_price);
    }
    
    if(apple_price!=0)
    {
        printf(" -%dkg \tApple   \t\t 180.00 \t%0.2f\n",apple_unit,apple_price);
    }
    
    if(chicken_price!=0)
    {
        printf(" -%dkg \tChicken \t\t 185.00 \t%0.2f\n",chicken_unit,chicken_price);
    }
    
    if(beef_price!=0)
    {
        printf(" -%dkg \tBeef    \t\t 250.00 \t%0.2f\n",beef_unit,beef_price);
    }
    
    if(salmon_price!=0)
    {
        printf(" -%dkg \tSalmon  \t\t 750.00 \t%0.2f\n",salmon_unit,salmon_price);
    }

    if(rice_price!=0)
    {
        printf(" -%dkg \tRice     \t\t  50.00 \t%0.2f\n",rice_unit,rice_price);
    }
    
    if(oil_price!=0)
    {
        printf(" -%dli \tOil     \t\t 200.00 \t%0.2f\n",oil_unit,oil_price);
    }
    
    if(lentil_price!=0)
    {
        printf(" -%dkg \tLentil  \t\t 130.00 \t%0.2f\n",lentil_unit,lentil_price);
    }
    
    if(bodylo_price!=0)
    {
        printf(" -%dpc\tBodyLotion\t\t 210.00 \t%0.2f\n",bodylo_unit,bodylo_price);
    }
    
    if(perfume_price!=0)
    {
        printf(" -%dpc \tPerfume  \t\t 340.00 \t%0.2f\n",perfume_unit,perfume_price);
    }
    
    if(soap_price!=0)
    {
        printf(" -%dpc \tSoap    \t\t  65.00  \t%0.2f\n",soap_unit,soap_price);
    }
    
    if(darkCho_price!=0)
    {
        printf(" -%dkg\tDarkCho  \t\t 900.00 \t%0.2f\n",darkCho_unit,darkCho_price);
    }

   if(cake_price!=0)
   {
        printf(" -%dlb \tCake     \t\t 700.00 \t%0.2f\n",cake_unit,cake_price);
   }

    if(rosogolla_price!=0)
    {
        printf(" -%dkg \tRosogollsa\t\t 350.00 \t%0.2f\n",rosogolla_unit,rosogolla_price);
    }
    
    if(tea_price!=0)
    {
        printf(" -%dpk \tTea       \t\t  20.00 \t%0.2f\n",tea_unit,tea_price);
    }
    
    if(coffee_price!=0)
    {
        printf(" -%dpk \tCoffee    \t\t  30.00 \t%0.2f\n",coffee_unit,coffee_price);
    }
    
    if(biscuit_price!=0)
    {
        printf(" -%dpc \tBiscuit   \t\t 170.00 \t%0.2f\n",biscuit_unit,biscuit_price);
    }
    
    if(toys_price!=0)
    {
        printf(" -%dpc\tToys      \t\t 110.00 \t%0.2f\n",toys_unit,toys_price);
    }
    
    if(diaper_price!=0)
    {
        printf(" -%dpc\tDiaper    \t\t 240.00 \t%0.2f\n",diaper_unit,diaper_price);
    }
    
    if(babyFood_price!=0)
    {
        printf(" -%dpk\tBabyFood  \t\t 850.00 \t%0.2f\n",babyFood_unit,babyFood_price);
    }
    
    if(shirt_price!=0)
    {
        printf(" -%dpc\tShirt     \t\t 600.00 \t%0.2f\n",shirt_unit,shirt_price);
    }
    
    if(scarf_price!=0)
    {
        printf(" -%dpc\tScarf     \t\t 220.00 \t%0.2f\n",scarf_unit,scarf_price);
    }
    
    if(payjama_price!=0)
    {
        printf(" -%dpc\tPayjama   \t\t 550.00 \t%0.2f\n",payjama_unit,payjama_price);
    }
    
    if(birthday_price!=0)
    {
        printf(" -%dpk\tBirthday  \t\t 790.00 \t%0.2f\n",birthday_unit,birthday_price);
    }
    
    if(anniversary_price!=0)
    {
        printf(" -%dpk\tAnniversary\t\t 890.00 \t%0.2f\n",anniversary_unit,anniversary_price);
    }
    
    if(special_price!=0)
    {
        printf(" -%dpk\tSpecial Combo\t\t 999.00 \t%0.2f\n",special_unit,special_price);
    }
    
    if(pen_price!=0)
    {
        printf(" -%dpc\tPen       \t\t  15.00 \t%0.2f\n",pen_unit,pen_price);
    }
    
    if(pencil_price!=0)
    {
        printf(" -%dpc\tPencil    \t\t  10.00 \t%0.2f\n",pencil_unit,pencil_price);
    }
    
    if(colours_price!=0)
    {
        printf(" -%dpk\tColours   \t\t  50.00 \t%0.2f\n",colours_unit,colours_price);
    }
    
    printf("====================================================================\n");
    printf("GROSS Total:\t\t\t\t\t%0.2f\n",total);
    printf("====================================================================\n");
    printf("====================================================================\n");
    printf("Total Payment:\t\t\t\t\t%0.2f\n",total);
    printf("Payments:\n");
    printf(" -Cash:  \t\t\t\t\t%0.2f\n",total);
    printf(" -TOTAL PAYMENT:\t\t\t\t%0.2f\n",total);
    printf(" -RETURNED AMOUNT: \t\t \t\t  00.00\n");
    printf("VAT included in Total\n");
    printf("====================================================================\n");
    printf("THANK YOU, COME AGAIN\n");
    printf("Powered by : www.supershop.com,01969099512");
}  
}