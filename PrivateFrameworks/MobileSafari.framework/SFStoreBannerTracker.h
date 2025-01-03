/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari
 */

@interface SFStoreBannerTracker : WBSBannerTracker {
    NSMutableDictionary * _hostToBannerRecordMap;
}

+ (id)sharedTracker;

- (void).cxx_destruct;
- (long long)basis;
- (void)blockProductBanner:(id)arg1;
- (bool)canUpdateProductID:(id)arg1 forHost:(id)arg2 time:(id)arg3;
- (id)categoryName;
- (void)isProductBannerBlocked:(id)arg1 forHost:(id)arg2 completion:(id /* block */)arg3;
- (bool)shouldBlockForIdentifier:(id)arg1 withDismissCount:(unsigned long long)arg2;

@end
