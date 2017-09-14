external document : ReasonReact.reactClass = "Document" [@@bs.module "@react-pdf/core"];

let make children =>
  ReasonReact.wrapJsForReason reactClass::document props::(Js.Obj.empty ()) children;
