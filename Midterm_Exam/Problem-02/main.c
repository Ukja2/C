//庚薦 2: 切毒奄 獣皇傾戚芝 覗稽益轡
//陥製 五敢研 亜遭 切毒奄 覗稽益轡聖 拙失馬室推 :
//*繕闇 : while 姥庚生稽 巷廃欠覗, 切毒奄 識澱精 switch (case人 default研 紫遂拝 依)稽 幻級 依
//1.紬虞(1, 000据)
//2.紫戚陥(900据)
//3.朕杷(1, 200据)
//4.持呪(500据)
//5.曽戟
//紫遂切拭惟 段奄 榎衝聖 脊径閤壱, 五敢 識澱聖 搭背 製戟研 姥古拝 呪 赤亀系 馬室推.
//1)姥古 板 ＾しし聖 姥古梅柔艦陥.害精 接衝 しし据￣聖 句随 依
//2)接衝戚 採膳馬檎 姥古拝 呪 蒸製 ＾接衝戚 採膳杯艦陥.琶推榎衝 しし据, 薄仙 しし据￣ 句随 依
//3)紫遂切亜 5研 脊径馬檎 覗稽益轡戚 曽戟鞠壱 接衝聖 鋼発 ＾切毒奄研 曽戟杯艦陥 接衝 しし据聖 鋼発杯艦陥.￣研 句随 依
//4)腰硲研 設公 識澱馬檎 ＾設公吉 識澱脊艦陥.1~5紫戚税 腰硲研 識澱背爽室推.￣虞壱 句随 依


#include<stdio.h>
#pragma warning(disable:4996)


int main() {

	int coke = 1000;
	int cider = 900;
	int coffee = 1200;
	int water = 500;

	int balance = 0; //燈脊廃 榎衝戚切 杯域



	printf("榎衝聖 脊径馬室推: ");
	scanf("%d", &balance);

	while (1) {
		
		int currentState = 0;

		printf("姥古拝 製戟研 識澱馬室推 1.紬虞 2.紫戚陥 3.朕杷 4.持呪 5.曽戟: ");
		scanf("%d", &currentState);

		switch (currentState)
		{
		case 1:

			if (coke > balance) {
				printf("接衝戚 採膳杯艦陥. 琶推榎衝 %d据 薄仙 %d据\n", coke, balance);
			} else{
				balance -= coke;
				printf("紬虞研 姥古梅柔艦陥. 害精 接衝 %d据\n", balance);
			}
			break;
			
		case 2:

			if (cider > balance) {
				printf("接衝戚 採膳杯艦陥. 琶推榎衝 %d据 薄仙 %d据\n", cider, balance);
			}
			else {
				balance -= cider;
				printf("紫戚陥研 姥古梅柔艦陥. 害精 接衝 %d据\n", balance);
			}
			break;

		case 3:

			if (coffee > balance) {
				printf("接衝戚 採膳杯艦陥. 琶推榎衝 %d据 薄仙 %d据\n", coffee, balance);
			}
			else {
				balance -= coffee;
				printf("朕杷研 姥古梅柔艦陥. 害精 接衝 %d据\n", balance);
			}
			break;

		case 4:

			if (water > balance) {
				printf("接衝戚 採膳杯艦陥. 琶推榎衝 %d据 薄仙 %d据\n", water, balance);
			}
			else {
				balance -= water;
				printf("持呪研 姥古梅柔艦陥. 害精 接衝 %d据\n", balance);
			}
			break;
		case 5:
			printf("切毒奄研 曽戟杯艦陥. 接衝 %d据聖 鋼発杯艦陥.\n", balance);
			return 0;

		default:
			printf("設公吉 識澱脊艦陥. 1~5紫戚税 腰硲研 識澱背爽室推.\n");
			break;
		}
	}


}
