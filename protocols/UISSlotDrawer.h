/* Generated by RuntimeBrowser.
 */

@protocol UISSlotDrawer <NSObject>

@optional

- (<UISDrawing> *)drawingWithStyle:(UISSlotStyle *)arg1 tag:(id)arg2 forRemote:(bool)arg3;
- (void)getImageWithStyle:(void *)arg1 tag:(void *)arg2 forRemote:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: UISSlotStyle *, UISSlotTag *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGImage { }*, NSError *, void*
- (struct CGImage { }*)imageWithStyle:(UISSlotStyle *)arg1 tag:(UISSlotTag *)arg2 forRemote:(bool)arg3;

@end