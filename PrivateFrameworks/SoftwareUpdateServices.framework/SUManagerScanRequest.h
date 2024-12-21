/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUManagerScanRequest : NSObject {
    id /* block */  _callback;
    NSError * _error;
    SUScanOptions * _options;
    SUCoreScanResults * _results;
}

@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) SUScanOptions *options;
@property (nonatomic, retain) SUCoreScanResults *results;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)error;
- (id)options;
- (id)results;
- (void)setCallback:(id /* block */)arg1;
- (void)setError:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setResults:(id)arg1;

@end