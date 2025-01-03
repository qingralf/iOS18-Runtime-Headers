/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
 */

@interface QLThumbnailExtensionMonitor : NSObject <_EXQueryControllerDelegate> {
    void extensionByIdentifier;
    void identitiesByType;
    void matchingExtensionsCache;
    void queryController;
    void queue;
}

+ (void)setShared:(id)arg1;
+ (id)shared;

- (void).cxx_destruct;
- (id)bestExtensionFor:(id)arg1 matching:(long long)arg2;
- (id)bestExtensionFor:(id)arg1 shouldUseRestrictedExtension:(bool)arg2 matching:(long long)arg3;
- (bool)canGenerateThumbnailWith:(id)arg1 at:(struct CGSize { double x1; double x2; })arg2;
- (id)init;
- (void)queryControllerDidUpdate:(id)arg1 resultDifference:(id)arg2;

@end
