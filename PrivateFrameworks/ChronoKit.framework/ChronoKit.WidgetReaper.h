/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoKit.framework/ChronoKit
 */

@interface ChronoKit.WidgetReaper : NSObject <NSProgressReporting> {
    void candidateURLsToRemove;
    void candidateURLsToRemoveWithChildrenToKeep;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  cutoffDate;
    void fileManager;
    void objectWillChange;
    void progress;
    void urlsToProtect;
}

@property (nonatomic, retain) NSProgress *progress;

- (void).cxx_destruct;
- (id)init;
- (id)progress;
- (void)setProgress:(id)arg1;

@end
