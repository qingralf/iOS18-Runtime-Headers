/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesAnalytics.framework/NotesAnalytics
 */

@interface ICASDrawingData : NSObject <AADataEventType> {
    ICASDrawingActionType * _drawingActionType;
    NSString * _drawingID;
    ICASDrawingTool * _drawingTool;
}

@property (nonatomic, readonly) ICASDrawingActionType *drawingActionType;
@property (nonatomic, readonly) NSString *drawingID;
@property (nonatomic, readonly) ICASDrawingTool *drawingTool;

+ (id)dataName;
+ (bool)requiresDiagnosticsConsent;

- (void).cxx_destruct;
- (id)drawingActionType;
- (id)drawingID;
- (id)drawingTool;
- (id)initWithDrawingActionType:(id)arg1 drawingTool:(id)arg2 drawingID:(id)arg3;
- (id)toDict;

@end