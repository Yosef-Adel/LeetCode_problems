class Solution {
    public int distanceTraveled(int mainTank, int additionalTank) {
        int total = 0;

        while (mainTank-5>=0 && additionalTank>0){
            mainTank-=5;
            mainTank++;
            additionalTank--;
            total+=5;
        }
        total+=mainTank;

        return total*10;
    }
}