/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistoryServiceImporter : NSObject <WBSHistoryImporterDelegate> {
    WBSHistoryServiceDatabase * _database;
    unsigned long long  _visitTimePrecision;
    NSMutableArray * _visits;
}

@property (nonatomic, readonly, retain) WBSHistoryServiceDatabase *database;
@property (nonatomic, readonly) unsigned long long visitTimePrecision;

- (void).cxx_destruct;
- (void)_submitVisitsWithCompletionHandler:(id /* block */)arg1;
- (void)addVisitWithURLString:(id)arg1 visitTime:(double)arg2 title:(id)arg3 loadSuccessful:(bool)arg4 httpGet:(bool)arg5 redirectSourceURLString:(id)arg6 redirectSourceVisitTime:(double)arg7 visitCount:(unsigned long long)arg8;
- (id)database;
- (void)finishWithCompletionHandler:(id /* block */)arg1;
- (id)initWithDatabase:(id)arg1 visitTimePrecision:(unsigned long long)arg2;
- (unsigned long long)visitTimePrecision;

@end