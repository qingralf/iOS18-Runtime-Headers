/* Generated by RuntimeBrowser.
 */

@protocol WBSScribbleControllerDelegate <NSObject>

@required

- (bool)isPrivateBrowsing;
- (NSArray *)normalBrowsingUserContentControllers;
- (void)scribbleController:(WBSScribbleController *)arg1 didUpdateSelectedElement:(WBSScribbleElement *)arg2 withError:(NSError *)arg3;
- (void)scribbleController:(WBSScribbleController *)arg1 runHidingAnimationWithElementRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)scribbleControllerDidUpdateHiddenElementCount:(WBSScribbleController *)arg1;
- (WBSScribbleQuirksManager *)scribbleQuirksManager;
- (WBSUserDefinedContentBlockerManager *)userDefinedContentBlockerManager;

@end