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
