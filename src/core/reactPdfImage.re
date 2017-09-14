external image : ReasonReact.reactClass = "Image" [@@bs.module "@react-pdf/core"];

let make src::(src: string) ::style=(Js.Obj.empty ()) children =>
  ReasonReact.wrapJsForReason reactClass::image props::{"src": src, "style": style} children;
