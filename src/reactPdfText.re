external text : ReasonReact.reactClass = "Text" [@@bs.module "@react-pdf/core"];

let make children =>
  ReasonReact.wrapJsForReason reactClass::text props::(Js.Obj.empty ()) children;
