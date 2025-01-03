/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GESS.framework/GESS
 */

@interface GESSAlgBase : NSObject {
    id /* block */  _error_callback;
    id /* block */  _progress_callback;
    int  algStatus;
}

@property int algStatus;

- (void).cxx_destruct;
- (int)algStatus;
- (id)init;
- (id)returnReport;
- (bool)run;
- (void)setAlgStatus:(int)arg1;
- (bool)setErrorCallback:(id /* block */)arg1;
- (bool)setProgressCallback:(id /* block */)arg1;

@end
