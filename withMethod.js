// with :> it is used to create the multiple object value and reuse it again.

function foo(obj) {
  with (obj) {
    a = 3;
  }
}

var oa = {
  a: 2,
};

foo(oa);
console.log(oa.a);

function findMax(num) {
  let max = num[0];
  for (let i = 0; i < num.length; i++) {
    for (let j = i + 1; j < num.length; j++) {
      if (num[j] < max) {
        max = num[j];
      }
    }
  }
  return max;
}

console.log(findMax([5, 3, 4, 7])); // 7
