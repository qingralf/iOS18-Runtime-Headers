/* Generated by RuntimeBrowser.
 */

@protocol LCSExtensionObserver <NSObject>

@optional

- (void)captureExtensionProvider:(id <LCSExtensionProvider>)arg1 didUpdateKnownExtensions:(NSSet *)arg2;
- (void)captureExtensionProvider:(id <LCSExtensionProvider>)arg1 updatedKnownExtensionsFrom:(NSSet *)arg2 to:(NSSet *)arg3;

@end