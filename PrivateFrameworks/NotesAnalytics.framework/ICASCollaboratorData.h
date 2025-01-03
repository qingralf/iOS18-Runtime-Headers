/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesAnalytics.framework/NotesAnalytics
 */

@interface ICASCollaboratorData : NSObject <AADataEventType> {
    NSNumber * _countOfCollaboratorAdded;
    NSNumber * _countOfCollaboratorRemoved;
}

@property (nonatomic, readonly) NSNumber *countOfCollaboratorAdded;
@property (nonatomic, readonly) NSNumber *countOfCollaboratorRemoved;

+ (id)dataName;
+ (bool)requiresDiagnosticsConsent;

- (void).cxx_destruct;
- (id)countOfCollaboratorAdded;
- (id)countOfCollaboratorRemoved;
- (id)initWithCountOfCollaboratorAdded:(id)arg1 countOfCollaboratorRemoved:(id)arg2;
- (id)toDict;

@end
