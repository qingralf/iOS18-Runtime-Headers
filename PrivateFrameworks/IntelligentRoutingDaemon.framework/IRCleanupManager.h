/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligentRoutingDaemon.framework/IntelligentRoutingDaemon
 */

@interface IRCleanupManager : NSObject {
    IRBackgroundActivitiesManager * _backgroundActivitiesManager;
}

@property (nonatomic) IRBackgroundActivitiesManager *backgroundActivitiesManager;

- (void).cxx_destruct;
- (id)_getDateIntervalOfBuildsToDiscard;
- (id)_getListOfBuildsToDiscard;
- (void)_handleCleanupXPCActivity;
- (id)backgroundActivitiesManager;
- (id)initWithBackgroundActivitiesManager:(id)arg1;
- (void)setBackgroundActivitiesManager:(id)arg1;

@end