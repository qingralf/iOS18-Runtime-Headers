/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

@interface ECMessageFlagChange : NSObject <ECMessageFlagChangeBuilder, EFPubliclyDescribable, NSCopying, NSSecureCoding> {
    bool  _deleted;
    bool  _deletedChanged;
    bool  _draft;
    bool  _draftChanged;
    unsigned long long  _flagColor;
    bool  _flagColorChanged;
    bool  _flagged;
    bool  _flaggedChanged;
    bool  _forwarded;
    bool  _forwardedChanged;
    unsigned long long  _junkLevel;
    bool  _junkLevelChanged;
    bool  _junkLevelSetByUser;
    bool  _junkLevelSetByUserChanged;
    bool  _read;
    bool  _readChanged;
    long long  _reason;
    bool  _redirected;
    bool  _redirectedChanged;
    bool  _replied;
    bool  _repliedChanged;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) bool deleted;
@property (nonatomic) bool deletedChanged;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool draft;
@property (nonatomic) bool draftChanged;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic) unsigned long long flagColor;
@property (nonatomic) bool flagColorChanged;
@property (nonatomic) bool flagged;
@property (nonatomic) bool flaggedChanged;
@property (nonatomic) bool forwarded;
@property (nonatomic) bool forwardedChanged;
@property (nonatomic, readonly) bool hasChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long junkLevel;
@property (nonatomic) bool junkLevelChanged;
@property (nonatomic) bool junkLevelSetByUser;
@property (nonatomic) bool junkLevelSetByUserChanged;
@property (nonatomic) bool read;
@property (nonatomic) bool readChanged;
@property (nonatomic) long long reason;
@property (nonatomic) bool redirected;
@property (nonatomic) bool redirectedChanged;
@property (nonatomic) bool replied;
@property (nonatomic) bool repliedChanged;
@property (readonly) Class superclass;

+ (id)changeFrom:(id)arg1 to:(id)arg2;
+ (id)clearFlagged;
+ (id)clearRead;
+ (id)setDeleted;
+ (id)setFlagged;
+ (id)setForwarded;
+ (id)setRead;
+ (id)setReplied;
+ (bool)supportsSecureCoding;

- (void)changesDeletedTo:(bool)arg1;
- (void)changesDraftTo:(bool)arg1;
- (void)changesFlagColorTo:(unsigned long long)arg1;
- (void)changesFlaggedTo:(bool)arg1;
- (void)changesForwardedTo:(bool)arg1;
- (void)changesJunkLevelSetByUserTo:(bool)arg1;
- (void)changesJunkLevelTo:(unsigned long long)arg1;
- (void)changesReadTo:(bool)arg1;
- (void)changesRedirectedTo:(bool)arg1;
- (void)changesRepliedTo:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deleted;
- (bool)deletedChanged;
- (id)description;
- (bool)draft;
- (bool)draftChanged;
- (id)ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)flagColor;
- (bool)flagColorChanged;
- (bool)flagged;
- (bool)flaggedChanged;
- (id)flagsAfterChangingFlags:(id)arg1 flagsWereChanged:(bool*)arg2;
- (bool)forwarded;
- (bool)forwardedChanged;
- (bool)hasChanges;
- (unsigned long long)hash;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)junkLevel;
- (bool)junkLevelChanged;
- (bool)junkLevelSetByUser;
- (bool)junkLevelSetByUserChanged;
- (bool)read;
- (bool)readChanged;
- (long long)reason;
- (bool)redirected;
- (bool)redirectedChanged;
- (bool)replied;
- (bool)repliedChanged;
- (void)setDeleted:(bool)arg1;
- (void)setDeletedChanged:(bool)arg1;
- (void)setDraft:(bool)arg1;
- (void)setDraftChanged:(bool)arg1;
- (void)setFlagColor:(unsigned long long)arg1;
- (void)setFlagColorChanged:(bool)arg1;
- (void)setFlagged:(bool)arg1;
- (void)setFlaggedChanged:(bool)arg1;
- (void)setForwarded:(bool)arg1;
- (void)setForwardedChanged:(bool)arg1;
- (void)setJunkLevel:(unsigned long long)arg1;
- (void)setJunkLevelChanged:(bool)arg1;
- (void)setJunkLevelSetByUser:(bool)arg1;
- (void)setJunkLevelSetByUserChanged:(bool)arg1;
- (void)setRead:(bool)arg1;
- (void)setReadChanged:(bool)arg1;
- (void)setReason:(long long)arg1;
- (void)setRedirected:(bool)arg1;
- (void)setRedirectedChanged:(bool)arg1;
- (void)setReplied:(bool)arg1;
- (void)setRepliedChanged:(bool)arg1;

@end
