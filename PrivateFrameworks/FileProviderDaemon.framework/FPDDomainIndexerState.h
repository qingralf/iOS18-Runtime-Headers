/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

@interface FPDDomainIndexerState : NSObject {
    bool  _droppedIndex;
    NSURL * _droppedIndexURL;
    NSURL * _lastDropDataURL;
    NSDate * _lastDropDate;
    unsigned long long  _lastDropReason;
    bool  _needsAuth;
    NSURL * _needsAuthURL;
    bool  _needsIndexing;
    NSURL * _needsIndexingURL;
    unsigned long long  _timesIndexWasDropSinceLastStart;
}

@property (nonatomic) bool droppedIndex;
@property (nonatomic, retain) NSDate *lastDropDate;
@property (nonatomic) unsigned long long lastDropReason;
@property (nonatomic) bool needsAuth;
@property (nonatomic) bool needsIndexing;
@property (nonatomic) unsigned long long timesIndexWasDropSinceLastStart;

- (void).cxx_destruct;
- (bool)droppedIndex;
- (void)dumpStateTo:(id)arg1;
- (id)initWithSupportURL:(id)arg1;
- (id)lastDropDate;
- (unsigned long long)lastDropReason;
- (void)loadPersistedState;
- (bool)needsAuth;
- (bool)needsIndexing;
- (void)recordIndexDropReason:(unsigned long long)arg1;
- (void)setBoolValue:(bool)arg1 atURL:(id)arg2;
- (void)setDroppedIndex:(bool)arg1;
- (void)setLastDropDate:(id)arg1;
- (void)setLastDropReason:(unsigned long long)arg1;
- (void)setNeedsAuth:(bool)arg1;
- (void)setNeedsIndexing:(bool)arg1;
- (void)setTimesIndexWasDropSinceLastStart:(unsigned long long)arg1;
- (unsigned long long)timesIndexWasDropSinceLastStart;
- (void)unarchiveLastDropData:(id)arg1;

@end
