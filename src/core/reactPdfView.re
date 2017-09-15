external view : ReasonReact.reactClass = "View" [@@bs.module "@react-pdf/core"];

let make style::(style: ReactPdfStyleSheet.t 'a)=(Js.Obj.empty ()) children =>
  ReasonReact.wrapJsForReason reactClass::view props::{"style": style} children;
