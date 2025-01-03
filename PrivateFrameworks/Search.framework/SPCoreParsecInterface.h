/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPCoreParsecInterface : NSObject {
    double  _gSessionStartTime;
    SPSearchParsecFeedbackProxy * _listener;
    bool  _parsecEnabled;
    PRSSearchSession * _searchSession;
    long long  _sessionOnceToken;
    NSObject<OS_dispatch_queue> * _sharedQueue;
}

@property double gSessionStartTime;
@property bool parsecEnabled;
@property (retain) PRSSearchSession *searchSession;
@property long long sessionOnceToken;
@property (retain) NSObject<OS_dispatch_queue> *sharedQueue;

+ (id)getSharedInstance;
+ (void)initialize;
+ (void)setSharedFeedbackListener:(id)arg1;
+ (id)sharedFeedbackListener;

- (void).cxx_destruct;
- (void)activate:(double)arg1;
- (void)deactivate;
- (void)dealloc;
- (double)gSessionStartTime;
- (id)getFeedbackListener;
- (id)init;
- (bool)parsecEnabled;
- (id)searchSession;
- (long long)sessionOnceToken;
- (void)setGSessionStartTime:(double)arg1;
- (void)setParsecEnabled:(bool)arg1;
- (void)setParsecFeedbackAllowed:(bool)arg1;
- (void)setParsecState:(bool)arg1;
- (void)setSearchSession:(id)arg1;
- (void)setSessionOnceToken:(long long)arg1;
- (void)setSharedQueue:(id)arg1;
- (void)setupSearchSession;
- (id)sharedQueue;

@end
