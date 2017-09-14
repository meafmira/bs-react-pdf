external link : ReasonReact.reactClass = "Link" [@@bs.module "@react-pdf/core"];

let make src::(src: string) ::style=(Js.Obj.empty ()) children =>
  ReasonReact.wrapJsForReason reactClass::link props::{"src": src, "style": style} children;
