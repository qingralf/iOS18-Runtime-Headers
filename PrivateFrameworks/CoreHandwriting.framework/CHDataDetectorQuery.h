/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHDataDetectorQuery : CHQuery {
    DDScannerServiceConfiguration * _dataDetectorConfiguration;
    NSArray * _foundItems;
}

@property (nonatomic, readonly, copy) NSArray *foundItems;

- (void).cxx_destruct;
- (id)debugName;
- (id)foundItems;
- (id)initWithRecognitionSession:(id)arg1;
- (bool)q_doesQueryResultDependOnDeclaredVariables;
- (bool)q_resultWantedForCompleteness:(long long)arg1;
- (void)q_updateQueryResult;

@end