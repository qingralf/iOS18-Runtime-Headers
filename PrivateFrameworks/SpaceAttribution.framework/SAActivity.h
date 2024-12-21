/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpaceAttribution.framework/SpaceAttribution
 */

@interface SAActivity : NSObject {
    NSBackgroundActivityScheduler * _activity;
    id /* block */  _completionHandler;
    bool  _deferActivity;
    bool  _shouldStop;
}

@property (retain) NSBackgroundActivityScheduler *activity;
@property (copy) id /* block */ completionHandler;
@property bool deferActivity;
@property bool shouldStop;

+ (id)newWithActivity:(id)arg1 andCompletionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)activity;
- (id /* block */)completionHandler;
- (bool)deferActivity;
- (id)initWithActivity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setActivity:(id)arg1;
- (void)setActivityResult:(long long)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDeferActivity:(bool)arg1;
- (void)setShouldStop:(bool)arg1;
- (bool)shouldDefer;
- (bool)shouldStop;

@end