/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

@interface BPSLinkCell : BPSBadgedTableCell {
    BPSLazyLoadingIconProperties * _lazyIconLoadingProperties;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lazyIconPropertiesLock;
}

+ (id)_iconCache;
+ (double)scale;

- (void).cxx_destruct;
- (id)blankIcon;
- (void)forceSynchronousIconLoadOnNextIconLoad;
- (id)getLazyIcon;
- (id)getLazyIconID;
- (id)init;
- (void)setSpecifier:(id)arg1;

@end
