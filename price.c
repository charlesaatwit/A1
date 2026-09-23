
/**
 * TODO: Complete and document
 */
int price(int peritem, int count, int bulk_limit) {
   
    if (peritem < 0 || count < 0 || bulk_limit < 0) {
        return 0;
    }

    if (count <= bulk_limit) {
        return peritem * count;
    }

    int regular_price = peritem * bulk_limit;
    int extra_items = count - bulk_limit;
    int discount_price = extra_items * (peritem / 2);

    return regular_price + discount_price;
}
