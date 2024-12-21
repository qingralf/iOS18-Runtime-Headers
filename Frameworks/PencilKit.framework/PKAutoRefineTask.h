/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKAutoRefineTask : NSObject {
    double  _averageOriginalTokenHeight;
    double  _averageOriginalTokenOrientation;
    double  _completionTime;
    <PKAutoRefineTaskDelegate> * _delegate;
    long long  _firstColumnToCommit;
    bool  _hasStrokeAnimationStarted;
    long long  _initialFirstColumnToCommit;
    long long  _initialLastColumnToCommit;
    bool  _isCanceled;
    bool  _isComplete;
    long long  _lastColumnToCommit;
    <CHStrokeProviderVersion> * _providerVersion;
    PKAutoRefineQueryItem * _queryItem;
    double  _startTime;
    NSString * _stringToRefine;
    bool  _strokesRefinementSuccessful;
    NSArray * _strokesToReplace;
}

- (void).cxx_destruct;
- (void)dealloc;

@end