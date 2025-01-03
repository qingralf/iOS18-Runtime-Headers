/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDPeopleSuggester : NSObject {
    <_CDInteractionAdvising> * _advisor;
    _CDCachedPeopleSuggestion * _cache;
    double  _cacheTimeoutSeconds;
    _CDPeopleSuggesterContext * _context;
    bool  _enableCaching;
    NSObject<OS_dispatch_queue> * _queue;
    _CDInteractionStoreNotificationReceiver * _receiver;
    _CDPeopleSuggesterSettings * _settings;
    int  _settingsNotifyToken;
}

@property double cacheTimeoutSeconds;
@property (retain) _CDPeopleSuggesterContext *context;
@property bool enableCaching;
@property (retain) _CDPeopleSuggesterSettings *settings;

+ (id)createAdvisorSettingsFromContext:(id)arg1 settings:(id)arg2;
+ (id)loggingTagForAutocompleteFeedback;
+ (id)peopleSuggester;
+ (id)peopleSuggesterUsingDaemon;
+ (id)peopleSuggesterWithDirectDBAccess;
+ (id)restrictedPrefixForPrefix:(id)arg1;

- (void).cxx_destruct;
- (double)cacheTimeoutSeconds;
- (id)context;
- (void)dealloc;
- (bool)enableCaching;
- (id)init;
- (id)initWithAdvisor:(id)arg1;
- (void)invalidateCache;
- (void)setCacheTimeoutSeconds:(double)arg1;
- (void)setContext:(id)arg1;
- (void)setEnableCaching:(bool)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;
- (void)suggestPeopleWithCompletionHandler:(id /* block */)arg1;
- (id)suggestPeopleWithError:(id*)arg1;
- (void)updateSettings;

@end
