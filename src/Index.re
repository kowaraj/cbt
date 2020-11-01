
[@bs.val] external document: Js.t({..}) = "document";
let makeRootElement = (n) => {
  let container = document##createElement("div");
  container##id #= n;
  let () = document##body##appendChild(container);
};

makeRootElement("root");

ReactDOMRe.renderToElementWithId(
  <App> { React.string("Hello 4") } </App>, 
  "root");

