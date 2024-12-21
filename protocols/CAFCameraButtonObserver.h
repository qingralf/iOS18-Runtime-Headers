/* Generated by RuntimeBrowser.
 */

@protocol CAFCameraButtonObserver <CAFServiceObserver>

@required

- (void)cameraButtonService:(CAFCameraButton *)arg1 didUpdateButtonAction:(unsigned char)arg2;
- (void)cameraButtonService:(CAFCameraButton *)arg1 didUpdateChildrenIdentifiers:(NSArray *)arg2;
- (void)cameraButtonService:(CAFCameraButton *)arg1 didUpdateContentURLAction:(NSString *)arg2;
- (void)cameraButtonService:(CAFCameraButton *)arg1 didUpdateDisabled:(bool)arg2;
- (void)cameraButtonService:(CAFCameraButton *)arg1 didUpdateHidden:(bool)arg2;
- (void)cameraButtonService:(CAFCameraButton *)arg1 didUpdateIdentifier:(NSString *)arg2;
- (void)cameraButtonService:(CAFCameraButton *)arg1 didUpdateName:(NSString *)arg2;
- (void)cameraButtonService:(CAFCameraButton *)arg1 didUpdateSelected:(bool)arg2;
- (void)cameraButtonService:(CAFCameraButton *)arg1 didUpdateSelectedEntryIndex:(unsigned char)arg2;
- (void)cameraButtonService:(CAFCameraButton *)arg1 didUpdateSortOrder:(unsigned char)arg2;
- (void)cameraButtonService:(CAFCameraButton *)arg1 didUpdateSymbolName:(NSString *)arg2;

@end