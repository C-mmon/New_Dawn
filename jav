class ApplyAll {
  constructor(x) { this.price = x; }
  applyDiscount(d) { return new ApplyAll(this.price - d); }
}

const discounts = [1.0, 4.0];
const strategy = new ApplyAll(10.0);
const finalPrice = 5.0;

const applyDiscount =
  (strategy, discount) => strategy.applyDiscount(discount);

discounts.reduce(applyDiscount, strategy).price == finalPrice;
