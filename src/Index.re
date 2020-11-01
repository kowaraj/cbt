
[@bs.val] external document: Js.t({..}) = "document";
let makeRootElement = (n) => {
  let container = document##createElement("div");
  container##id #= n;
  let () = document##body##appendChild(container);
};

makeRootElement("root");
//ReactDOMRe.renderToElementWithId(<App />, "root");
ReactDOMRe.renderToElementWithId(
  <Test2> { React.string("Hello 4") } </Test2>, 
  "root");

// makeRootElement("root2");
// //ReactDOMRe.renderToElementWithId(<App />, "root");
// ReactDOMRe.renderToElementWithId(
//   <ReasonUsingJSUsingReason />,
//   "root2");
