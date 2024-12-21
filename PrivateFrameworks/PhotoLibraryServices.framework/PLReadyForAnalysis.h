/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLReadyForAnalysis : NSObject {
    PLLazyObject * _lazyAppPrivateData;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDate * _lock_lastLogDate;
    unsigned short  _lock_readyState;
    NSString * _lock_status;
    PLLibraryServicesManager * _lsm;
}

@property (readonly) bool isReadyForAnalysis;
@property (readonly) bool isReadyForAnalysisInitialDownloadCompleted;
@property (readonly) bool isReadyForAnalysisQuickCheck;

- (void).cxx_destruct;
- (void)_lock_checkCPLInitialDownloadStatusForState:(unsigned short)arg1;
- (void)_lock_checkComputeCacheStatusForState:(unsigned short)arg1;
- (void)_lock_checkIsReadyForAnalysisForState:(unsigned short)arg1;
- (void)_lock_checkReadyForCPLStatusForState:(unsigned short)arg1;
- (bool)_lock_isReadyForAnalysisState:(unsigned short)arg1;
- (void)_lock_logIfPermittedWithString:(id)arg1;
- (void)_lock_updateAndLogStatusWithString:(id)arg1;
- (id)_statusLogPrefix;
- (id)appPrivateData;
- (void)dealloc;
- (id)initWithLibraryServicesManager:(id)arg1;
- (bool)isReadyForAnalysis;
- (bool)isReadyForAnalysisInitialDownloadCompleted;
- (bool)isReadyForAnalysisQuickCheck;
- (void)resetReadyForAnalysisState;

@end