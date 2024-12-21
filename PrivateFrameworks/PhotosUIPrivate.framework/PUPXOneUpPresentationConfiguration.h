/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate
 */

@interface PUPXOneUpPresentationConfiguration : NSObject <PXOneUpPresentationConfiguration> {
    unsigned long long  _activity;
    id /* block */  _activityCompletion;
    bool  _animated;
    long long  _interactiveMode;
}

@property (nonatomic) unsigned long long activity;
@property (nonatomic, copy) id /* block */ activityCompletion;
@property (getter=isAnimated, nonatomic) bool animated;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long interactiveMode;
@property (nonatomic, readonly) unsigned long long pu_activity;
@property (nonatomic, readonly) long long pu_interactiveMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)activity;
- (id /* block */)activityCompletion;
- (id)init;
- (long long)interactiveMode;
- (bool)isAnimated;
- (unsigned long long)pu_activity;
- (long long)pu_interactiveMode;
- (void)setActivity:(unsigned long long)arg1;
- (void)setActivityCompletion:(id /* block */)arg1;
- (void)setAnimated:(bool)arg1;
- (void)setInteractiveMode:(long long)arg1;

@end