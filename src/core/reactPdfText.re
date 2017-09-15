external text : ReasonReact.reactClass = "Text" [@@bs.module "@react-pdf/core"];

let make ::style=(Js.Obj.empty ()) children =>
  ReasonReact.wrapJsForReason reactClass::text props::{"style": style} children;
