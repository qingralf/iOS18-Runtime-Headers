/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBHAnalyticsEventsController : NSObject {
    NSHashTable * _allProviders;
    NSString * _eventsControllerDomain;
}

@property (nonatomic, retain) NSHashTable *allProviders;
@property (nonatomic, readonly) NSString *eventsControllerDomain;

- (void).cxx_destruct;
- (void)addProvider:(id)arg1;
- (id)allProviders;
- (void)dealloc;
- (id)eventsControllerDomain;
- (id)initWithEventsControllerDomain:(id)arg1;
- (void)removeProvider:(id)arg1;
- (void)sendEventsForProvidersWhenSignificantTimeChanged;
- (void)setAllProviders:(id)arg1;

@end