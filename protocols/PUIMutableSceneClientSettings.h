/* Generated by RuntimeBrowser.
 */

@protocol PUIMutableSceneClientSettings <NSObject>

@required

- (bool)pui_didFinishInitialization;
- (bool)pui_inExtendedRenderSession;
- (void)pui_setDidFinishInitialization:(bool)arg1;
- (void)pui_setInExtendedRenderSession:(bool)arg1;
- (void)pui_setSignificantEventOptions:(unsigned long long)arg1;
- (void)pui_setSignificantEventTime:(unsigned long long)arg1;
- (void)pui_setUserTapEventsRequested:(bool)arg1;
- (unsigned long long)pui_significantEventOptions;
- (unsigned long long)pui_significantEventTime;
- (bool)pui_userTapEventsRequested;

@end