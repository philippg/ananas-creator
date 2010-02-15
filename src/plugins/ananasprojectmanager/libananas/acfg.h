
/****************************************************************************
** $Id: acfg.h,v 1.1 2008/11/05 21:16:28 leader Exp $
**
** Header file of the Ananas configuration objects of Ananas
** Designer and Engine applications
**
** Created : 20031201
**
** Copyright (C) 2003-2004 Leader InfoTech.  All rights reserved.
** Copyright (C) Andrey Paskal <app at lrn dot ru>, Yoshkar-Ola
** Copyright (C) 2003-2005 Grigory Panov <gr1313 at mail dot ru >, Yoshkar-Ola
**
** This file is part of the Library of the Ananas
** automation accounting system.
**
** This file may be distributed and/or modified under the terms of the
** GNU General Public License version 2 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.leaderit.ru/page=ananas or email sales@leaderit.ru
** See http://www.leaderit.ru/gpl/ for GPL licensing information.
**
** Contact org@leaderit.ru if any conditions of this licensing are
** not clear to you.
**
**********************************************************************/

/*
Ananas configuration objects.
(c) 2004 Leader InfoTech
*/
#ifndef ACFG_H
#define ACFG_H

#include "ananasglobal.h"
//#include <QtGui>
#include <qicon.h>
#include <qmenu.h>
#include <QtXml/qdom.h>
#include <QHash>

#ifdef __BORLANDC__
#define CHECK_POINT 	printf("%s:%i %s()\n",__FILE__,__LINE__,__FUNC__);
#else
#define CHECK_POINT 	printf("%s:%i %s()\n",__FILE__,__LINE__,__FUNCTION__);
#endif


//extern void (*cfg_messageproc)(int , const char *);
//void ANANAS_EXPORT cfg_message(int msgtype, const char *msgfmt,...);
//void ANANAS_EXPORT debug_message(const char *msgfmt,...);
 
class QObject;

/*!
 * \~english Metadata object methods return codes. \~russian
 * Коды возвратов методов объекта метаданных. \~
 */
#define RC_OK		0	/**< All right - no errors */
#define RC_ERROR	1	/**< Error while executing method */

/*!
Metadata system contexts id.
*/
#define mdc_unknown		0	/**< Unknown context */
#define mdc_root		1	/**< Root context */
#define mdc_info		2	/**< Info context */
#define mdc_interface		3	/**< Interface context */
#define mdc_metadata		4	/**< Metadata context */
#define mdc_globals		5	/**< Metadata context */
#define mdc_actions		6	/**< Actions context */

//#define mdc_documents	6	/**< Metadata context */
//#define mdc_catalogues	7	/**< Metadata context */
//#define mdc_iregisters	8	/**< Metadata context */
//#define mdc_aregisters	9	/**< Metadata context */
//#define mdc_reports		10	/**< Metadata context */
//#define mdc_journals		11	/**< Metadata context */

/*!
Metadata tags.
*/
#define md_root 		"ananas_configuration"
#define md_interface		"interface"

#define md_info 		"info"
#define md_info_name 		"name"
#define md_info_author 		"author"
#define md_info_date 		"date"
#define md_info_mdate 		"mdate"
#define md_info_remark 		"remark"
#define md_info_lastid 		"lastid"
//#define md_info_dir 		"dir"

#define md_metadata 		"metadata"	/**< Metadata tag */
#define md_globals		"globals"
#define md_languages		"languages"
#define md_language		"language"
#define md_aliases		"aliases"
#define md_alias		"alias"
#define md_roles		"roles"
#define md_role 		"role"
#define md_description		"description"
#define md_sourcecode		"sourcecode"
#define md_servermodule	        "server_module"
#define md_clientmodule		"client_module"
#define md_formsource		"form_source"
#define md_menutext		"menutext"
#define md_argument		"argument"

#define md_documents		"documents"
#define md_document		"document"

#define md_catalogues		"catalogues"
#define md_catalogue		"catalogue"
#define md_element		"element"
#define md_group		"group"

#define md_string_view		"string_view"
#define md_svfunction		"svfunction"

#define md_registers		"registers"
#define md_iregisters		"iregisters"
#define md_iregister		"iregister"
#define md_aregisters		"aregisters"
#define md_aregister		"aregister"

#define md_reports		"reports"
#define md_report		"report"

#define md_journals		"journals"
#define md_journal		"journal"
#define md_columns		"columns"
#define md_column		"column"
#define md_used_doc		"used_doc"
#define md_fieldid		"fieldid"

#define md_field		"field"
#define md_forms		"forms"
#define md_form			"form"
#define md_defaultmod		"defaultmod"
#define md_webforms		"webforms"
#define md_webform		"webform"
#define md_formdesign		"dialogform"

#define md_tables		"tables"
#define md_table		"table"
#define md_header		"header"

#define md_resources		"resources"
#define md_dimensions		"dimensions"
#define md_information		"information"

/*!
Action metadata object items.
*/
#define md_actions		"actions"
#define md_actiongroup		"actiongroup"
#define md_action		"action"
#define md_objectid		"objectid"
#define md_formid		"formid"
#define md_actiontype		"actiontype"
#define md_active_picture	"active_picture"
#define md_passive_picture	"passive_picture"

/*!
Interface metadata object items.
*/
#define md_interface		"interface"
#define md_toolbars		"toolbars"
#define md_toolbar		"toolbar"
#define md_popupmenus		"popupmenus"
#define md_popupmenu		"popupmenu"
#define md_mainmenu		"mainmenu"
#define md_submenu		"submenu"
#define md_command		"command"
#define md_comaction		"comaction"
#define md_separator		"separator"
#define md_key			"key"
#define md_menutext		"menutext"
//key modifiers
#define md_km_ctrl		"Ctrl+"
#define md_km_alt		"Alt+"
#define md_km_shift		"Shift+"

#define md_image_collection	"image_collection"
#define md_image		"image"


/*!
Metadata attributes.
*/
#define mda_name		"name"
#define mda_id		        "id"
#define mda_type		"type"
#define mda_readonly		"readonly"
#define mda_lang		"lang"
#define mda_nz		        "nz"
#define mda_sort		"sort"
#define mda_no_unconduct	"no_unconduct"
#define mda_plus		"plus"
#define mda_sum			"sum"
#define mda_tag			"tag"
#define mda_trfile		"trfile"
#define mda_length		"length"
#define mda_format		"format"
#define mda_stdf		"stdf"
#define mda_rights		"rights"

/*!
Actions types
*/

#define md_action_new		0
#define md_action_edit		1
#define md_action_view		2
#define md_action_execute	3

/*!
 *	Default forms types.
 *	If bit with some number set in 1 form can use for this action.
 */

#define md_form_nouse		0
#define md_form_new		1
#define md_form_view		2
#define md_form_edit		3
#define md_form_select		4


/*!
 *	Catalogue forms types.
 */

#define md_form_elem_list	0
#define md_form_elem		1
#define md_form_group		2


/*!
System object id
*/

#define	md_systemjournal	1
#define md_aregarhive		2

//class aCfg;
//extern aCfg cfg;

#define ERR_Code int

#define err_unknown		-1//some ote error
#define err_noerror		0// result successful
#define err_notable		1// no table with such name
#define err_objnotfound		2// no such object in metadata
#define err_incorrecttype	3// object has othe metadata id
#define err_uidnotfound		4// no such id in unicues
#define err_notselected		5// select return nothing
#define err_nodatabase		6// database is not inited
#define	err_selecterror		7// select return some error
#define err_condition		8// error in condition
#define err_noobject		9// aObject didn't init md object
#define err_nosysjournal	10// system journal not inited
#define err_inserterror		11// insert in aSQLTable return false
#define err_execerror		12// exec return false
#define	err_updateerror		13// update reutrn false
#define	err_abstractobj		14// you need to use hi level object or specimen of object
#define err_fieldnotfound	15// no filed with such name
#define err_copyerror		16// object don't copy
#define err_nocatalogue		17// catalogue not found
#define err_nogroup		18// group not found
#define err_deleteerror		19// object don't deleted or don't mark deleted
#define err_nodocument		20// no such document
#define err_emptyperiod		21// you try close empty period
#define err_noresources		22// the register object have no resources tag in metadata
#define err_incorrectname	23// object have incorrect name
#define err_closeperiod		24// close period error
#define err_conducterror	25// error when document conducting
#define err_docconducted	26// you can't change conducted document or conduct document once more
#define err_docunconducted	27// you can unconduct document if it not conducted
#define err_cyclereparent	28//you have cycle when try reparent
#define err_readonly		29//object is readonly
#define err_invaliddate		30// invalid date or datetime specified
#define err_nodimensions	31// the register object have no dimensions tag in metadata
#define err_nowidgetfound	32// there is no such widget in form

#define md_user_roles		"userroles"
#define md_users		"users"
#define md_user			"user"
#define md_usr_role		"u_role"
#define md_roles		"roles"
#define md_role			"role"
#define md_rl_users		"r_users"
#define md_rl_user		"r_user"
#define md_right_roles		"rroles"

#define perm_read		0
#define perm_execute		1
#define perm_create		2
#define perm_delete		3
#define perm_turn_on		4
#define perm_turn_off		5
#define perm_admin		6

#define aPermission		int

#define aCfgItem 		QDomElement

#define md_row_count		8

class  DomCfgItem : public QObject
{
    Q_OBJECT
public:
    DomCfgItem(QDomNode &node, int row, DomCfgItem *parent = 0);
    ~DomCfgItem();
    virtual DomCfgItem *root();
    virtual DomCfgItem *child(int i);
    virtual DomCfgItem *child(QString f);
    virtual DomCfgItem *child(QString f,int j);
    virtual bool remove(int i);//Удаляет i потомка объекта
    DomCfgItem *parent();//Возвращает владельца объекта конфигурации
    void insert(DomCfgItem *context,QString &otype,QString &name,long id);
    DomCfgItem* newCatalogue();
    DomCfgItem* newJournal();
    DomCfgItem* newElement();
    QDomNode node() const;
    QString nodeName() const;
    QString nodeValue() const;
    QString cfgName() const;
    QIcon iconNode();
    int row();
    virtual bool hasChildren() const;
    QMenu *menu() const;
    QString attr(QString attrName) const;
    QStringList types(QStringList filter = QStringList("base"));
    QString getNameByType(QStringList type);
    QString configName();//Возвращает полное имя объекта
    virtual DomCfgItem *findObjectById(QString id);
    virtual DomCfgItem *findObjectById(int id);
    DomCfgItem *findByName(QString name);
    DomCfgItem *find(QString f);
    virtual int childCount();
    QByteArray binary();
    long nextID();
    bool modified();
    bool moveUp();
    bool moveDown();
    void setModified();
    long getDefaultFormId(DomCfgItem *owner,int actiontype,int mode);
    void setText(const QString &name,const QString &value );
    void setAttr(const QString &name, const QString &value);
    void setSText(const QString & subname, const QString &value);
protected:
	QDomNode domNode;
	QHash<int,DomCfgItem*> childItems;
    	QHash<QString,DomCfgItem*> hashId;
        DomCfgItem *rootNode;
private:
    DomCfgItem *parentItem;	
    int rowNumber;
    bool fCompressed, fModified;

};

class ANANAS_EXPORT DomCfgItemInterfaces : public DomCfgItem
{
    Q_OBJECT
public:
    DomCfgItemInterfaces(QDomNode &node, int row, DomCfgItemInterfaces *parent = 0);
    virtual DomCfgItem *child(int i);
    virtual DomCfgItem *child(QString f);
    virtual DomCfgItem *child(QString f,int j);
    virtual bool hasChildren() const;
    virtual int childCount();
};

class ANANAS_EXPORT DomCfgItemActions : public DomCfgItem
{
    Q_OBJECT
public:
    DomCfgItemActions(QDomNode &node, int row, DomCfgItemActions *parent = 0);
    virtual DomCfgItem *child(int i);
    virtual DomCfgItem *child(QString f);
    virtual DomCfgItem *child(QString f,int j);
    virtual bool hasChildren() const;
    virtual int childCount();
   // virtual DomCfgItemActions *findObjectById(QString id);
    //virtual DomCfgItemActions *findObjectById(int id);
};

#endif
