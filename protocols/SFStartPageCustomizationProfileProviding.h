/* Generated by RuntimeBrowser.
 */

@protocol SFStartPageCustomizationProfileProviding <NSObject>

@required

- (WBProfile *)activeProfile;
- (NSString *)activeProfileIdentifier;
- (WBTabGroup *)activeTabGroup;
- (bool)hasMultipleProfiles;
- (NSString *)startPageBackgroundImageIdentifier;
- (WBProfile *)updateProfileWithIdentifier:(void *)arg1 persist:(void *)arg2 usingBlock:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 14: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBMutableProfile *, void*, id /* block */, void*, void, id /* block */, bool, void*

@end