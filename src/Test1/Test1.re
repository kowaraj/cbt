[@react.component]
let make = (~children) => {
  let (show, setShow) = React.useState(() => true);

  React.useEffect0(() => {
    let id = Js.Global.setInterval( () => setShow(previousShow => !previousShow), 1000, );
    Some(() => Js.Global.clearInterval(id));
  });

  let style =
    if (show) { 
      ReactDOMRe.Style.make(
        ~opacity="1", 
        ~transition="opacity 1s", 
        ~color="red",
        ~fontSize="40px",
        ());
    } else { 
      ReactDOMRe.Style.make(~opacity="0", ~transition="opacity 1s", ());
    };

  <div style> children </div>;
};
