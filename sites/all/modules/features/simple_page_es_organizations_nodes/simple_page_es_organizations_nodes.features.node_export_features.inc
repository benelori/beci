<?php
/**
 * @file
 * simple_page_es_organizations_nodes.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function simple_page_es_organizations_nodes_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'124\',
      \'uid\' => \'3\',
      \'title\' => \'Babeș-Bolyai University\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'53c9e48c-158e-4e50-af3a-d5b417e56c05\',
      \'nid\' => \'124\',
      \'type\' => \'organizations\',
      \'language\' => \'en\',
      \'created\' => \'1421227017\',
      \'changed\' => \'1425040988\',
      \'tnid\' => \'123\',
      \'translate\' => \'0\',
      \'uuid\' => \'0238afac-8c40-44eb-b546-9421ffe48a7b\',
      \'revision_timestamp\' => \'1425040988\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://ubbcluj.ro/hu/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'57\',
            \'uid\' => \'3\',
            \'filename\' => \'ubb.jpg\',
            \'uri\' => \'public://ubb.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'33334\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421226930\',
            \'type\' => \'image\',
            \'uuid\' => \'bf87acd4-8661-4444-9202-928440f3804f\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'300\',
              \'height\' => \'298\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'300\',
            \'height\' => \'298\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421227017\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'133\',
        \'source\' => \'node/124\',
        \'alias\' => \'babeș-bolyai-university\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1281\',
      \'uid\' => \'3\',
      \'title\' => \'Facultatea de Științe Economice și Gestiunea Afacerilor\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0b91fc73-16f4-4e25-b62d-404eeeaa7d86\',
      \'nid\' => \'1281\',
      \'type\' => \'organizations\',
      \'language\' => \'ro\',
      \'created\' => \'1425040566\',
      \'changed\' => \'1425040566\',
      \'tnid\' => \'906\',
      \'translate\' => \'0\',
      \'uuid\' => \'03c11674-e8be-4493-bd87-b12c5c0368c8\',
      \'revision_timestamp\' => \'1425040566\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">A Babeş-Bolyai Tudományegyetem Közgazdaság- és Gazdálkodástudományi Kara a 2000-2001-es tanévtől kezdődően biztosít magyar nyelvű közgazdász képzést. A szervezetileg is különálló&nbsp;<strong>Közgazdaság- és Gazdálkodástudományi Magyar Intézet</strong>&nbsp;2011 októberében jött létre 21 főállású oktatóval. A magas színvonalú közgazdász képzést helyi és külföldi neves oktatók biztosítják.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Alapképzésen&nbsp;</strong>négy szakirányon kezdhetik meg tanulmányaikat a hallgatók: Gazdasági informatika, Marketing, Menedzsment, valamint Pénzügy és bank. Az érdeklődőknek három magyar nyelvű közgazdasági&nbsp;<strong>mesteri képzés</strong>t biztosítunk: Marketing stratégiák és politikák, Vállalati pénzügyi menedzsment, Vállalkozásmenedzsment. Intézetünk a nappali képzés mellett a hallgatóknak távoktatásos képzést is nyújt.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Az egyetemi kötelező tanterv mellett szakkollégiumi tevékenységek, esettanulmány versenyek, tudományos diákköri konferenciák, szakmai táborok, diákprogramok, meghívott neves hazai és külföldi gyakorló közgadászok és egyetemi oktatók előadásai szinesítik tevékenységeinket. Az elmúlt évtized munkájának eredményeit mutatják diákjaink elméleti és gyakorlati jellegű, hazai és nemzetközi versenyeken elért kimagasló eredményei.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Intézetünk tagjai számos szakterületet lefedő kutatómunkát is folytatnak. Több nemzetközi kutatási projekt tagjaiként eredményeiket tudományos publikációik, nemzetközi konferenciákon tartott előadásaik támasztják alá.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Intézetünk nemzetközi kapcsolatai lehetőséget biztosítanak hallgatóink számára a külföldi közgazdasági egyetemek oktatási programjain való részvételre.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">A Babeş-Bolyai Tudományegyetem Közgazdaság- és Gazdálkodástudományi Kara a 2000-2001-es tanévtől kezdődően biztosít magyar nyelvű közgazdász képzést. A szervezetileg is különálló <strong>Közgazdaság- és Gazdálkodástudományi Magyar Intézet</strong> 2011 októberében jött létre 21 főállású oktatóval. A magas színvonalú közgazdász képzést helyi és külföldi neves oktatók biztosítják.</p>\\n<p class=\\"rtejustify\\"><strong>Alapképzésen </strong>négy szakirányon kezdhetik meg tanulmányaikat a hallgatók: Gazdasági informatika, Marketing, Menedzsment, valamint Pénzügy és bank. Az érdeklődőknek három magyar nyelvű közgazdasági <strong>mesteri képzés</strong>t biztosítunk: Marketing stratégiák és politikák, Vállalati pénzügyi menedzsment, Vállalkozásmenedzsment. Intézetünk a nappali képzés mellett a hallgatóknak távoktatásos képzést is nyújt.</p>\\n<p class=\\"rtejustify\\">Az egyetemi kötelező tanterv mellett szakkollégiumi tevékenységek, esettanulmány versenyek, tudományos diákköri konferenciák, szakmai táborok, diákprogramok, meghívott neves hazai és külföldi gyakorló közgadászok és egyetemi oktatók előadásai szinesítik tevékenységeinket. Az elmúlt évtized munkájának eredményeit mutatják diákjaink elméleti és gyakorlati jellegű, hazai és nemzetközi versenyeken elért kimagasló eredményei.</p>\\n<p class=\\"rtejustify\\">Intézetünk tagjai számos szakterületet lefedő kutatómunkát is folytatnak. Több nemzetközi kutatási projekt tagjaiként eredményeiket tudományos publikációik, nemzetközi konferenciákon tartott előadásaik támasztják alá.</p>\\n<p class=\\"rtejustify\\">Intézetünk nemzetközi kapcsolatai lehetőséget biztosítanak hallgatóink számára a külföldi közgazdasági egyetemek oktatási programjain való részvételre.</p>\\n",
          ),
        ),
      ),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://hu.econ.ubbcluj.ro/intezetunkrol\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'608\',
            \'uid\' => \'4\',
            \'filename\' => \'fsega_0.jpg\',
            \'uri\' => \'public://fsega_0_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'7185\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422004695\',
            \'type\' => \'image\',
            \'uuid\' => \'272db08d-421a-492d-858c-0f220e4f5f82\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'381\',
              \'height\' => \'185\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'381\',
            \'height\' => \'185\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1425040566\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1293\',
        \'source\' => \'node/1281\',
        \'alias\' => \'facultatea-de-științe-economice-și-gestiunea-afacerilor-0\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'125\',
      \'uid\' => \'3\',
      \'title\' => \'Universitatea Babeș-Bolyai\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c6f28620-2251-4cc6-898d-7cac12c4ad10\',
      \'nid\' => \'125\',
      \'type\' => \'organizations\',
      \'language\' => \'ro\',
      \'created\' => \'1421227037\',
      \'changed\' => \'1425041012\',
      \'tnid\' => \'123\',
      \'translate\' => \'0\',
      \'uuid\' => \'0b3f98c4-5477-4bf0-9b5f-f21e4cc0e33f\',
      \'revision_timestamp\' => \'1425041012\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://ubbcluj.ro/hu/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'57\',
            \'uid\' => \'3\',
            \'filename\' => \'ubb.jpg\',
            \'uri\' => \'public://ubb.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'33334\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421226930\',
            \'type\' => \'image\',
            \'uuid\' => \'bf87acd4-8661-4444-9202-928440f3804f\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'300\',
              \'height\' => \'298\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'300\',
            \'height\' => \'298\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421227037\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'134\',
        \'source\' => \'node/125\',
        \'alias\' => \'universitatea-babeș-bolyai\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'146\',
      \'uid\' => \'3\',
      \'title\' => \'Romchemicals\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'982ed3f4-3775-42c9-aa41-80cfa645e22b\',
      \'nid\' => \'146\',
      \'type\' => \'organizations\',
      \'language\' => \'en\',
      \'created\' => \'1421228233\',
      \'changed\' => \'1421311434\',
      \'tnid\' => \'144\',
      \'translate\' => \'0\',
      \'uuid\' => \'0ea90a3e-f503-4e1e-b4ee-0bd21e67f730\',
      \'revision_timestamp\' => \'1421311434\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.hungarochemicals.hu/eng/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'64\',
            \'uid\' => \'3\',
            \'filename\' => \'romchemicalslogo.jpg\',
            \'uri\' => \'public://romchemicalslogo.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'36727\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421228201\',
            \'type\' => \'image\',
            \'uuid\' => \'5e40fee3-20d9-4203-97b7-319a373d7a08\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'1002\',
              \'height\' => \'258\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1002\',
            \'height\' => \'258\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421228233\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'155\',
        \'source\' => \'node/146\',
        \'alias\' => \'romchemicals\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'6\',
      \'uid\' => \'3\',
      \'title\' => \'Obiective\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1b74e4e1-25de-44de-8478-62277aa5e331\',
      \'nid\' => \'6\',
      \'type\' => \'gtk_simple_page\',
      \'language\' => \'ro\',
      \'created\' => \'1421170503\',
      \'changed\' => \'1421225878\',
      \'tnid\' => \'1\',
      \'translate\' => \'0\',
      \'uuid\' => \'10dfe647-322b-415e-a4e6-3cf60bcbbbac\',
      \'revision_timestamp\' => \'1421225878\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>Obiectivul principal al GTK - Business Consulting Club</strong><strong>:</strong></p>\\r\\n\\r\\n<div>\\r\\n<div>\\r\\n<p>Obiectivul principal al GTK - Business Consulting Club este de a contribui la&nbsp;<em>dezvoltarea profesională</em>&nbsp;a studenţilor Departamentului de Ştiinţe Economice şi Gestiunea Afacerilor în Limba Maghiară al Universităţii Babeş-Bolyai, dincolo de educaţia universitară. GTK - Business Consulting Club oferă membrilor săi posibilitatea de a pune în practică cunoştinţele dobândite în băncile universităţii în situaţii economice reale sau apropiate de realitate.</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<p><strong>Particularităţile GTK - Business Consulting Club</strong><strong> şi relaţia sa cu universitatea:</strong></p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>GTK - Business Consulting Club este o organizaţie studenţească specializată în&nbsp;<em>consultanţa în afaceri</em>, şi se compune din studenţi ai Departamentului de Ştiinţe Economice şi Gestiunea Afacerilor în Limba Maghiară al Universităţii Babeş-Bolyai.</li>\\r\\n\\t<li>Activitatea GTK - Business Consulting Club&nbsp;<em>nu este legat direct de programul educaţional</em>&nbsp;al Universităţii Babeş-Bolyai; în activităţile sale participă atât profesori universitari, cât şi manageri şi specialişti din mediul de afaceri.</li>\\r\\n\\t<li>GTK - Business Consulting Club este conceput ca o posibilitate extracurriculară care are ca scop principal&nbsp;<em>dezvoltarea profesională a membrilor dincolo de educaţia universitară</em>.</li>\\r\\n\\t<li>Prima prioritate a GTK - Business Consulting Club este de a se adapta la realitatea economică, conform căreia majoritatea absolvenţilor noştri vor deveni, nu teoreticieni, ci&nbsp;<em>practicanţi în afaceri lucrând în echipă</em>.</li>\\r\\n\\t<li>GTK - Business Consulting Club îşi propune să&nbsp;<em>contribuie la creşterea reputaţiei universităţii</em>&nbsp;prin cariera profesională de success a membrilor, prin relaţiile cu mediul de afaceri, respectiv prin participările şi rezultatele obţinute la concursuri naţionale şi internaţionale studenţeşti din domeniul afacerilor.</li>\\r\\n</ul>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<p><strong>Cadrul legislativ şi organizatoric al activităţilor GTK - Business Consulting Club</strong><strong>:</strong></p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Cadrul de funcţionare al GTK - Business Consulting Club este asigurat de Asociaţia Pro Oeconomica (organizaţie non-profit a cadrelor didactice din Departamentul de Ştiinţe Economice şi Gestiunea Afacerilor în Limba Maghiară, Universitatea Babeş-Bolyai).</li>\\r\\n\\t<li>GTK - Business Consulting Club este înregistrat ca un colegiu special la Federaţia Universitară Maghiară din Cluj-Napoca.</li>\\r\\n\\t<li>Specialişti din mediul de afaceri participă activ în programele GTK - Business Consulting Club, împărtăşind cunoştinţele şi experienţa lor, respectiv asigurând oportunităţi membrilor GTK - Business Consulting Club de a participa în programe de management shadowing.&nbsp;</li>\\r\\n</ul>\\r\\n</div>\\r\\n</div>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Obiectivul principal al GTK - Business Consulting Club</strong><strong>:</strong></p>\\n<p>Obiectivul principal al GTK - Business Consulting Club este de a contribui la <em>dezvoltarea profesională</em> a studenţilor Departamentului de Ştiinţe Economice şi Gestiunea Afacerilor în Limba Maghiară al Universităţii Babeş-Bolyai, dincolo de educaţia universitară. GTK - Business Consulting Club oferă membrilor săi posibilitatea de a pune în practică cunoştinţele dobândite în băncile universităţii în situaţii economice reale sau apropiate de realitate.</p>\\n<p> </p>\\n<p><strong>Particularităţile GTK - Business Consulting Club</strong><strong> şi relaţia sa cu universitatea:</strong></p>\\n<ul><li>GTK - Business Consulting Club este o organizaţie studenţească specializată în <em>consultanţa în afaceri</em>, şi se compune din studenţi ai Departamentului de Ştiinţe Economice şi Gestiunea Afacerilor în Limba Maghiară al Universităţii Babeş-Bolyai.</li>\\n<li>Activitatea GTK - Business Consulting Club <em>nu este legat direct de programul educaţional</em> al Universităţii Babeş-Bolyai; în activităţile sale participă atât profesori universitari, cât şi manageri şi specialişti din mediul de afaceri.</li>\\n<li>GTK - Business Consulting Club este conceput ca o posibilitate extracurriculară care are ca scop principal <em>dezvoltarea profesională a membrilor dincolo de educaţia universitară</em>.</li>\\n<li>Prima prioritate a GTK - Business Consulting Club este de a se adapta la realitatea economică, conform căreia majoritatea absolvenţilor noştri vor deveni, nu teoreticieni, ci <em>practicanţi în afaceri lucrând în echipă</em>.</li>\\n<li>GTK - Business Consulting Club îşi propune să <em>contribuie la creşterea reputaţiei universităţii</em> prin cariera profesională de success a membrilor, prin relaţiile cu mediul de afaceri, respectiv prin participările şi rezultatele obţinute la concursuri naţionale şi internaţionale studenţeşti din domeniul afacerilor.</li>\\n</ul><p> </p>\\n<p><strong>Cadrul legislativ şi organizatoric al activităţilor GTK - Business Consulting Club</strong><strong>:</strong></p>\\n<ul><li>Cadrul de funcţionare al GTK - Business Consulting Club este asigurat de Asociaţia Pro Oeconomica (organizaţie non-profit a cadrelor didactice din Departamentul de Ştiinţe Economice şi Gestiunea Afacerilor în Limba Maghiară, Universitatea Babeş-Bolyai).</li>\\n<li>GTK - Business Consulting Club este înregistrat ca un colegiu special la Federaţia Universitară Maghiară din Cluj-Napoca.</li>\\n<li>Specialişti din mediul de afaceri participă activ în programele GTK - Business Consulting Club, împărtăşind cunoştinţele şi experienţa lor, respectiv asigurând oportunităţi membrilor GTK - Business Consulting Club de a participa în programe de management shadowing. </li>\\n</ul>",
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_simple_pages\' => array(),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421170503\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'15\',
        \'source\' => \'node/6\',
        \'alias\' => \'obiective\',
        \'language\' => \'ro\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Despre noi\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-40\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => TRUE,
        \'has_children\' => \'1\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'2\',
      \'uid\' => \'1\',
      \'title\' => \'About Us\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b1a86085-696d-4daa-ba3a-0f5ffe419ff4\',
      \'nid\' => \'2\',
      \'type\' => \'gtk_simple_page\',
      \'language\' => \'en\',
      \'created\' => \'1421014008\',
      \'changed\' => \'1423494910\',
      \'tnid\' => \'1\',
      \'translate\' => \'0\',
      \'uuid\' => \'14075ec7-3ad4-4f84-be25-145a870a17e6\',
      \'revision_timestamp\' => \'1423494910\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><strong>The main objective of the GTK - Business Consulting Club (BCC):</strong></p>\\r\\n\\r\\n<p>The main objective of the BCC is to contribute to the&nbsp;<em>professional development</em>&nbsp;of the students of the Babes-Bolyai University (Department of Economics and Business Administration in Hungarian Language), beyond regular higher education. We aim to provide the possibility for our members to use the knowledge acquired at the university in real business environment or in close-to-reality situations.</p>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<p><strong>Features of the BCC and relationship with the university:</strong></p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>The BCC is an autonomous organization of students of the Babes-Bolyai University, Department of Economics and Business Administration in Hungarian Language that specializes in&nbsp;<em>business consulting</em>.</li>\\r\\n\\t<li>The BCC is&nbsp;<em>not linked directly to the program of education</em>&nbsp;of the Babes-Bolyai University; university professors, managers and business professionals all participate in its activities.</li>\\r\\n\\t<li>The BCC is conceived as an extracurricular possibility that aims to contribute to the&nbsp;<em>professional development of members beyond regular higher education</em>.</li>\\r\\n\\t<li>The first priority of the BCC is to adapt to economic reality, according to which the majority of our graduated students are not going to become theoreticians, but&nbsp;<em>business practitioners working with/in teams</em>.</li>\\r\\n\\t<li>The BCC aims to primarily contribute to the&nbsp;<em>reputation of the university</em>&nbsp;with the future carrier of our graduate students, with our business relationships, and with the participation and results of our members on practice-oriented national and international business competitions.</li>\\r\\n</ul>\\r\\n\\r\\n<p>&nbsp;</p>\\r\\n\\r\\n<p><strong>Legal and organizational framework of BCC activities:</strong></p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>The operational framework of the BCC is covered by the Pro Oeconomica Association (a non-profit background organization of the university)</li>\\r\\n\\t<li>The BCC is registered as a special college at the Hungarian University Federation from Cluj-Napoca</li>\\r\\n\\t<li>Business professionals actively participate in the programs of the BCC, sharing their knowledge and experience, and offering management shadowing programs for our members</li>\\r\\n</ul>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>The main objective of the GTK - Business Consulting Club (BCC):</strong></p>\\n<p>The main objective of the BCC is to contribute to the <em>professional development</em> of the students of the Babes-Bolyai University (Department of Economics and Business Administration in Hungarian Language), beyond regular higher education. We aim to provide the possibility for our members to use the knowledge acquired at the university in real business environment or in close-to-reality situations.</p>\\n<p> </p>\\n<p><strong>Features of the BCC and relationship with the university:</strong></p>\\n<ul><li>The BCC is an autonomous organization of students of the Babes-Bolyai University, Department of Economics and Business Administration in Hungarian Language that specializes in <em>business consulting</em>.</li>\\n<li>The BCC is <em>not linked directly to the program of education</em> of the Babes-Bolyai University; university professors, managers and business professionals all participate in its activities.</li>\\n<li>The BCC is conceived as an extracurricular possibility that aims to contribute to the <em>professional development of members beyond regular higher education</em>.</li>\\n<li>The first priority of the BCC is to adapt to economic reality, according to which the majority of our graduated students are not going to become theoreticians, but <em>business practitioners working with/in teams</em>.</li>\\n<li>The BCC aims to primarily contribute to the <em>reputation of the university</em> with the future carrier of our graduate students, with our business relationships, and with the participation and results of our members on practice-oriented national and international business competitions.</li>\\n</ul><p> </p>\\n<p><strong>Legal and organizational framework of BCC activities:</strong></p>\\n<ul><li>The operational framework of the BCC is covered by the Pro Oeconomica Association (a non-profit background organization of the university)</li>\\n<li>The BCC is registered as a special college at the Hungarian University Federation from Cluj-Napoca</li>\\n<li>Business professionals actively participate in the programs of the BCC, sharing their knowledge and experience, and offering management shadowing programs for our members</li>\\n</ul>",
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_simple_pages\' => array(),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421014008\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'10\',
        \'source\' => \'node/2\',
        \'alias\' => \'about-us\',
        \'language\' => \'en\',
      ),
      \'menu\' => array(
        \'link_title\' => \'About Us\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-33\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => TRUE,
        \'has_children\' => \'1\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'145\',
      \'uid\' => \'3\',
      \'title\' => \'Romchemicals\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'720c6d15-cdda-409a-b2e1-e5154f403414\',
      \'nid\' => \'145\',
      \'type\' => \'organizations\',
      \'language\' => \'hu\',
      \'created\' => \'1421228217\',
      \'changed\' => \'1422005044\',
      \'tnid\' => \'144\',
      \'translate\' => \'0\',
      \'uuid\' => \'144e0b57-2a42-43a1-a663-44e4f8f0eb42\',
      \'revision_timestamp\' => \'1422005044\',
      \'revision_uid\' => \'4\',
      \'field_body\' => array(),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://hungarochemicals.hu/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'614\',
            \'uid\' => \'4\',
            \'filename\' => \'romchemicalslogo.jpg\',
            \'uri\' => \'public://romchemicalslogo_1.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'4833\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422005044\',
            \'type\' => \'image\',
            \'uuid\' => \'8468009d-2b81-48fa-8f68-784f1de60c00\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'380\',
              \'height\' => \'152\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'380\',
            \'height\' => \'152\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421228217\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'154\',
        \'source\' => \'node/145\',
        \'alias\' => \'romchemicals\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'142\',
      \'uid\' => \'3\',
      \'title\' => \'Marso\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b7361d53-b70f-4b01-b3ae-c5ea7bba8bf7\',
      \'nid\' => \'142\',
      \'type\' => \'organizations\',
      \'language\' => \'hu\',
      \'created\' => \'1421228145\',
      \'changed\' => \'1422004876\',
      \'tnid\' => \'141\',
      \'translate\' => \'0\',
      \'uuid\' => \'1c7f20e0-6ae4-4143-b456-15d21c158976\',
      \'revision_timestamp\' => \'1422004876\',
      \'revision_uid\' => \'4\',
      \'field_body\' => array(),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.marso.ro/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'612\',
            \'uid\' => \'4\',
            \'filename\' => \'marsologo.jpg\',
            \'uri\' => \'public://marsologo_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'6374\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422004876\',
            \'type\' => \'image\',
            \'uuid\' => \'baf901a7-df2d-42d9-a3d6-db060c7a5a33\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'380\',
              \'height\' => \'152\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'380\',
            \'height\' => \'152\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421228145\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'151\',
        \'source\' => \'node/142\',
        \'alias\' => \'marso\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'120\',
      \'uid\' => \'3\',
      \'title\' => \'Felvételi\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8a8d279a-9e9f-4773-9d26-172329746a1c\',
      \'nid\' => \'120\',
      \'type\' => \'gtk_simple_page\',
      \'language\' => \'hu\',
      \'created\' => \'1421226546\',
      \'changed\' => \'1421835904\',
      \'tnid\' => \'120\',
      \'translate\' => \'0\',
      \'uuid\' => \'2c0f3240-b2ad-4a41-9d98-e7a1ade24a83\',
      \'revision_timestamp\' => \'1421835904\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<h2 class=\\"rtejustify\\">2014. októberében újra megnyitjuk az őszi felvételi folyamatot! Részletek lennebb...</h2>\\r\\n\\r\\n<div>\\r\\n<div>\\r\\n<p class=\\"rtejustify\\">A kolozsvári Babeş-Bolyai Tudományegyetem Közgazdaság- és Gazdálkodástudományi Karának magyar tagozatos hallgatói körében 2008 óta minden évben újra meghirdetésre kerül a Gazdasági Tanácsadó Klubba való felvétel, két formában:</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li class=\\"rtejustify\\"><u><strong>Általános felvételi:</strong></u>&nbsp;minden év&nbsp;<strong>október/novemberében MINDEN</strong>&nbsp;kolozsvári BBTE KGTK magyar tagozatos hallgató pályázhat. Az általános felvételin felvételt nyert új tagok azonnal bekapcsolódnak minden GTK alapprogramba.</li>\\r\\n\\t<li class=\\"rtejustify\\"><u><strong>Kiegészítő felvételi:</strong></u><strong>&nbsp;</strong>minden év&nbsp;<strong>április/májusában</strong>&nbsp;minden olyan kolozsvári BBTE KGTK magyar tagozatos hallgató pályázhat, aki nem végzős mesteris, és az utolsó október/novemberi általános felvételi&nbsp;<strong>óta eltelt időszakban nemzetközi vagy helyi esettanulmány versenyen díjazott volt (beleértve dicséretet és különdíjat), vagy pedig hivatalosan dokumentálható okokból</strong>&nbsp;nem vehetett részt a legutóbbi általános felvételin. A hivatalosan dokumentálható okot a motivációs levélben, az esetverseny eredményt a CV-ben kérjük (esetenként) feltüntetni. A kiegészítő felvételi során bejutott új tagok csak a következő tanév kezdetekor (október) kapcsolódnak be minden GTK alapprogramba (féléves csoportos projekt, menedzsment shadowing), addig csak a GTK rendezvényeken való részvétel elvárt.</li>\\r\\n</ul>\\r\\n\\r\\n<p class=\\"rtejustify\\">&nbsp;</p>\\r\\n\\r\\n<h2 class=\\"rtejustify\\">A 2014. októberi felvételin való részvétel aktuális feltételei</h2>\\r\\n\\r\\n<p class=\\"rtejustify\\">A 2014. év&nbsp;októberében rendezett felvételi&nbsp;<strong>általános felvételi.&nbsp;</strong>A maximálisan felvehető tagok száma:&nbsp;<strong>10 fő</strong>.</p>\\r\\n\\r\\n<h2 class=\\"rtejustify\\">Standard Felvételi Eljárás</h2>\\r\\n\\r\\n<p class=\\"rtejustify\\"><em>1. lépés – Önéletrajz, motivációs levél (pályázók)</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Fényképes önéletrajz és motivációs levél elküldése, elektronikusan,&nbsp;<u>2014. október 17. (péntek), 21:00 óráig</u>&nbsp;az&nbsp;<a href=\\"mailto:office@gtk.ro\\">office@gtk.ro</a>&nbsp;címre.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><em>2. lépés – esettanulmány (pályázók)</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">A jelentkező személyek legkésőbb&nbsp;<u>2014. október 17., 22:00 óráig</u>&nbsp;kapnak egy olyan esettanulmányt, amely megoldására irányuló, legfennebb 1 oldalas egyéni javaslataikat&nbsp;<u>2014. október 19. (vasárnap), 23:00 óráig</u><u>,</u>&nbsp;kell elküldeni az&nbsp;<a href=\\"mailto:office@gtk.ro\\">office@gtk.ro</a>&nbsp;címre.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><em>3. lépés – interjú (jelöltekké vált pályázók)</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Azok a pályázók, akik a koordinátorokból, külső szakemberekből és szenior tagokból álló Felvételi Bizottságtól (a beérkezett 3 dokumentum alapján: CV, motivációs levél, eset megoldás)&nbsp;<u>2014. október 20. (hétfő)</u><u>, 18:00 óráig</u>&nbsp;kapott visszajelzésük egy&nbsp;<u>2014. október 21-én, kedden</u>&nbsp;tartandó interjúra való meghívást is tartalmaz, azok a visszajelzéssel együtt közölt időpontban és helyszínen kell megjelenjenek a felvételi eljárás 3. lépésére, az interjúra.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><em>4. lépés – eredményhirdetés (jelöltek) és tevékenység indítása (új és régi tagok).</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Sok siker kívánunk minden jelentkezőnek!&nbsp;<br />\\r\\nA Felvételi Bizottság</strong></p>\\r\\n</div>\\r\\n</div>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<h2 class=\\"rtejustify\\">2014. októberében újra megnyitjuk az őszi felvételi folyamatot! Részletek lennebb...</h2>\\n<div>\\n<div>\\n<p class=\\"rtejustify\\">A kolozsvári Babeş-Bolyai Tudományegyetem Közgazdaság- és Gazdálkodástudományi Karának magyar tagozatos hallgatói körében 2008 óta minden évben újra meghirdetésre kerül a Gazdasági Tanácsadó Klubba való felvétel, két formában:</p>\\n<ul><li class=\\"rtejustify\\"><u><strong>Általános felvételi:</strong></u> minden év <strong>október/novemberében MINDEN</strong> kolozsvári BBTE KGTK magyar tagozatos hallgató pályázhat. Az általános felvételin felvételt nyert új tagok azonnal bekapcsolódnak minden GTK alapprogramba.</li>\\n<li class=\\"rtejustify\\"><u><strong>Kiegészítő felvételi:</strong></u><strong> </strong>minden év <strong>április/májusában</strong> minden olyan kolozsvári BBTE KGTK magyar tagozatos hallgató pályázhat, aki nem végzős mesteris, és az utolsó október/novemberi általános felvételi <strong>óta eltelt időszakban nemzetközi vagy helyi esettanulmány versenyen díjazott volt (beleértve dicséretet és különdíjat), vagy pedig hivatalosan dokumentálható okokból</strong> nem vehetett részt a legutóbbi általános felvételin. A hivatalosan dokumentálható okot a motivációs levélben, az esetverseny eredményt a CV-ben kérjük (esetenként) feltüntetni. A kiegészítő felvételi során bejutott új tagok csak a következő tanév kezdetekor (október) kapcsolódnak be minden GTK alapprogramba (féléves csoportos projekt, menedzsment shadowing), addig csak a GTK rendezvényeken való részvétel elvárt.</li>\\n</ul><p class=\\"rtejustify\\"> </p>\\n<h2 class=\\"rtejustify\\">A 2014. októberi felvételin való részvétel aktuális feltételei</h2>\\n<p class=\\"rtejustify\\">A 2014. év októberében rendezett felvételi <strong>általános felvételi. </strong>A maximálisan felvehető tagok száma: <strong>10 fő</strong>.</p>\\n<h2 class=\\"rtejustify\\">Standard Felvételi Eljárás</h2>\\n<p class=\\"rtejustify\\"><em>1. lépés – Önéletrajz, motivációs levél (pályázók)</em></p>\\n<p class=\\"rtejustify\\">Fényképes önéletrajz és motivációs levél elküldése, elektronikusan, <u>2014. október 17. (péntek), 21:00 óráig</u> az <a href=\\"mailto:office@gtk.ro\\">office@gtk.ro</a> címre.</p>\\n<p class=\\"rtejustify\\"><em>2. lépés – esettanulmány (pályázók)</em></p>\\n<p class=\\"rtejustify\\">A jelentkező személyek legkésőbb <u>2014. október 17., 22:00 óráig</u> kapnak egy olyan esettanulmányt, amely megoldására irányuló, legfennebb 1 oldalas egyéni javaslataikat <u>2014. október 19. (vasárnap), 23:00 óráig</u><u>,</u> kell elküldeni az <a href=\\"mailto:office@gtk.ro\\">office@gtk.ro</a> címre.</p>\\n<p class=\\"rtejustify\\"><em>3. lépés – interjú (jelöltekké vált pályázók)</em></p>\\n<p class=\\"rtejustify\\">Azok a pályázók, akik a koordinátorokból, külső szakemberekből és szenior tagokból álló Felvételi Bizottságtól (a beérkezett 3 dokumentum alapján: CV, motivációs levél, eset megoldás) <u>2014. október 20. (hétfő)</u><u>, 18:00 óráig</u> kapott visszajelzésük egy <u>2014. október 21-én, kedden</u> tartandó interjúra való meghívást is tartalmaz, azok a visszajelzéssel együtt közölt időpontban és helyszínen kell megjelenjenek a felvételi eljárás 3. lépésére, az interjúra.</p>\\n<p class=\\"rtejustify\\"><em>4. lépés – eredményhirdetés (jelöltek) és tevékenység indítása (új és régi tagok).</em></p>\\n<p class=\\"rtejustify\\"><strong>Sok siker kívánunk minden jelentkezőnek! <br />\\nA Felvételi Bizottság</strong></p>\\n</div>\\n</div>\\n",
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_simple_pages\' => array(),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421226546\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'129\',
        \'source\' => \'node/120\',
        \'alias\' => \'felvételi\',
        \'language\' => \'hu\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Felvételi\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-46\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'133\',
      \'uid\' => \'3\',
      \'title\' => \'Hungarian University Federation from Cluj-Napoca\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9e077946-273d-4ec5-b744-71e7f645a3cd\',
      \'nid\' => \'133\',
      \'type\' => \'organizations\',
      \'language\' => \'en\',
      \'created\' => \'1421227783\',
      \'changed\' => \'1425041434\',
      \'tnid\' => \'132\',
      \'translate\' => \'0\',
      \'uuid\' => \'2d87a9e8-a8f8-475e-92f7-00c11df4635b\',
      \'revision_timestamp\' => \'1425041434\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">The Hungarian University Federation from Cluj-Napoca (FUMC–KMEI) is a Romanian non-profit legal entity. Its headquarters is in Cluj-Napoca, str. Tipografiei Nr. 12/1, jud. Cluj, it has been established in 2004 (registration no. 8203/2004, by the Cluj County Court. Tax no: 16747585, bank account no. RO35RNCB0106026575120001 RON, BCR – Cluj. Its legal representative is lect. univ. dr. Szabó Árpád Töhötöm, the director of the organization.The federation was founded by the associations and the foundations that worked as the background institutions for the departments of the Hungarian line at the Babes–Bolyai University and its aim is to support the academic activities at BBU.<br />\\r\\nThe main objectives and the proposed activities of the University Federation are the following: the support of the scientific colleges that secure the formation of the future elites, the support of the different forms of teacher-student collaboration, tutorial programs for students, the support of visiting professor programs, the support and implementation of research programs, organization of conferences, workshops and other scientific events with the scope of the development of the scientific activities. We propose to offer grants and scholarships for study and research, awards, prizes and other allocations, subventions in collaboration with other associations and institutions in order to achieve an advanced level in scientific and educational activities.<br />\\r\\nFUMC–KMEI considers an important task the representation of interests of the professional-scientific groups that work in the framework of the higher studies in Hungarian language in Cluj-Napoca, as well the relationships with the Ministry of Education, other scientific institutions and universities home and abroad.<br />\\r\\nThe operative management of the University Federation is covered by the Executive Board, and the scientific-cultural coordination is provided by the Scientific Council.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">The Hungarian University Federation from Cluj-Napoca (FUMC–KMEI) is a Romanian non-profit legal entity. Its headquarters is in Cluj-Napoca, str. Tipografiei Nr. 12/1, jud. Cluj, it has been established in 2004 (registration no. 8203/2004, by the Cluj County Court. Tax no: 16747585, bank account no. RO35RNCB0106026575120001 RON, BCR – Cluj. Its legal representative is lect. univ. dr. Szabó Árpád Töhötöm, the director of the organization.The federation was founded by the associations and the foundations that worked as the background institutions for the departments of the Hungarian line at the Babes–Bolyai University and its aim is to support the academic activities at BBU.<br />\\nThe main objectives and the proposed activities of the University Federation are the following: the support of the scientific colleges that secure the formation of the future elites, the support of the different forms of teacher-student collaboration, tutorial programs for students, the support of visiting professor programs, the support and implementation of research programs, organization of conferences, workshops and other scientific events with the scope of the development of the scientific activities. We propose to offer grants and scholarships for study and research, awards, prizes and other allocations, subventions in collaboration with other associations and institutions in order to achieve an advanced level in scientific and educational activities.<br />\\nFUMC–KMEI considers an important task the representation of interests of the professional-scientific groups that work in the framework of the higher studies in Hungarian language in Cluj-Napoca, as well the relationships with the Ministry of Education, other scientific institutions and universities home and abroad.<br />\\nThe operative management of the University Federation is covered by the Executive Board, and the scientific-cultural coordination is provided by the Scientific Council.</p>\\n",
          ),
        ),
      ),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.kmei.ro/index.php/en/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1020\',
            \'uid\' => \'3\',
            \'filename\' => \'kmei_1_0.jpg\',
            \'uri\' => \'public://kmei_1_0_1.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'5671\',
            \'status\' => \'1\',
            \'timestamp\' => \'1425041434\',
            \'type\' => \'image\',
            \'uuid\' => \'4cc7706f-282a-4592-9cf2-ee802c5ee8e6\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'380\',
              \'height\' => \'185\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'380\',
            \'height\' => \'185\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421227783\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'142\',
        \'source\' => \'node/133\',
        \'alias\' => \'hungarian-university-federation-cluj-napoca\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'140\',
      \'uid\' => \'3\',
      \'title\' => \'East Grain\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'06b12344-8b72-4e56-be04-375488db7d23\',
      \'nid\' => \'140\',
      \'type\' => \'organizations\',
      \'language\' => \'en\',
      \'created\' => \'1421228097\',
      \'changed\' => \'1425040756\',
      \'tnid\' => \'139\',
      \'translate\' => \'0\',
      \'uuid\' => \'2df9c436-5c80-4544-8414-19dc392b36ba\',
      \'revision_timestamp\' => \'1425040756\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Compania East Grain a fost înfiinţată în anul 2007, dată la care își începe activitatea în domeniul comerțului cu cereale, semințe oleaginoase și a plantelor furajere, preponderent pe piața din România și Ungaria. Succesul companiei se bazează pe vasta experiență a acţionarilor și colaboratorilor mai ales în partea Europei Centrale și de Est, în domeniul agriculturii, industriei de prelucrare (morărit, producția de furaje și creșterea animalelor), precum și a comerțului cu plante cerealiere.</p>\\r\\n\\r\\n<blockquote>\\r\\n<p>Cu o continuă ascensiune de la înființare și până în prezent, anul fiscal 2011 a însemnat pentru East Grain vânzări de aproximativ 50.000 de tone de marfă, ceea ce echivalează cu o cifră de afaceri anuală de 10 milioane de euro.</p>\\r\\n</blockquote>\\r\\n\\r\\n<p>În urma experienţelor acumulate în ultimii ani datorită parteneriatelor strategice cu numeroase mori și fabrici de nutreţuri combinate, putem afirma faptul că principalele produse East Grain sunt grâul pentru morărit și porumbul, acestea constituind baza focalizării noastre strategice. În completare, este semnificativ comerțul cu semințe oleaginoase, dar paleta include și alte produse din cultura agricolă (orz, secară, grâu dur) precum și o gamă largă de materii prime furajere (soia, floarea soarelui, rapiță, tărâțe de grâu și porumb, DDGS, etc.)</p>\\r\\n\\r\\n<blockquote>\\r\\n<p>Gândirea și planificarea pe termen lung constituie elementul central al viziunii noastre în afaceri, în mod deosebit în cazul relaţionării cu partenerii. Aceasta viziune ne-a ajutat sa menținem o colaborare sănătoasă cu majoritatea partenerilor noștri de la înființarea companiei încoace.</p>\\r\\n</blockquote>\\r\\n\\r\\n<p>În formarea relațiilor pe termen lung, în afara cunoștiințelor noastre de specialitate considerăm că este deosebit de importantă și soluționarea nevoilor de finanțare și transport ale partenerilor noștri.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Compania East Grain a fost înfiinţată în anul 2007, dată la care își începe activitatea în domeniul comerțului cu cereale, semințe oleaginoase și a plantelor furajere, preponderent pe piața din România și Ungaria. Succesul companiei se bazează pe vasta experiență a acţionarilor și colaboratorilor mai ales în partea Europei Centrale și de Est, în domeniul agriculturii, industriei de prelucrare (morărit, producția de furaje și creșterea animalelor), precum și a comerțului cu plante cerealiere.</p>\\n<blockquote><p>Cu o continuă ascensiune de la înființare și până în prezent, anul fiscal 2011 a însemnat pentru East Grain vânzări de aproximativ 50.000 de tone de marfă, ceea ce echivalează cu o cifră de afaceri anuală de 10 milioane de euro.</p>\\n</blockquote>\\n<p>În urma experienţelor acumulate în ultimii ani datorită parteneriatelor strategice cu numeroase mori și fabrici de nutreţuri combinate, putem afirma faptul că principalele produse East Grain sunt grâul pentru morărit și porumbul, acestea constituind baza focalizării noastre strategice. În completare, este semnificativ comerțul cu semințe oleaginoase, dar paleta include și alte produse din cultura agricolă (orz, secară, grâu dur) precum și o gamă largă de materii prime furajere (soia, floarea soarelui, rapiță, tărâțe de grâu și porumb, DDGS, etc.)</p>\\n<blockquote><p>Gândirea și planificarea pe termen lung constituie elementul central al viziunii noastre în afaceri, în mod deosebit în cazul relaţionării cu partenerii. Aceasta viziune ne-a ajutat sa menținem o colaborare sănătoasă cu majoritatea partenerilor noștri de la înființarea companiei încoace.</p>\\n</blockquote>\\n<p>În formarea relațiilor pe termen lung, în afara cunoștiințelor noastre de specialitate considerăm că este deosebit de importantă și soluționarea nevoilor de finanțare și transport ale partenerilor noștri.</p>\\n",
          ),
        ),
      ),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.eastgrain.ro/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1017\',
            \'uid\' => \'3\',
            \'filename\' => \'eastgrainlogo_0_0.jpg\',
            \'uri\' => \'public://eastgrainlogo_0_0_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'5907\',
            \'status\' => \'1\',
            \'timestamp\' => \'1425040756\',
            \'type\' => \'image\',
            \'uuid\' => \'bff9a57c-1b98-45cd-a09d-55a6f859df9a\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'381\',
              \'height\' => \'185\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'381\',
            \'height\' => \'185\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421228097\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'149\',
        \'source\' => \'node/140\',
        \'alias\' => \'east-grain\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'149\',
      \'uid\' => \'3\',
      \'title\' => \'Romespa\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'218e2cd1-5404-4903-8334-9b9ed8cf6575\',
      \'nid\' => \'149\',
      \'type\' => \'organizations\',
      \'language\' => \'ro\',
      \'created\' => \'1421228300\',
      \'changed\' => \'1421311379\',
      \'tnid\' => \'147\',
      \'translate\' => \'0\',
      \'uuid\' => \'301a8b40-66f3-40e1-992d-0735a64bd604\',
      \'revision_timestamp\' => \'1421311379\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'65\',
            \'uid\' => \'3\',
            \'filename\' => \'romespalogo.jpg\',
            \'uri\' => \'public://romespalogo.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'30942\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421228273\',
            \'type\' => \'image\',
            \'uuid\' => \'0fa0c535-7299-4a44-b0db-edc5acf58528\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'1202\',
              \'height\' => \'274\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1202\',
            \'height\' => \'274\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421228300\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'158\',
        \'source\' => \'node/149\',
        \'alias\' => \'romespa\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'130\',
      \'uid\' => \'3\',
      \'title\' => \'Pro Oeconomica Association\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8d0dfa61-191f-4587-83b7-58d1e045ed51\',
      \'nid\' => \'130\',
      \'type\' => \'organizations\',
      \'language\' => \'en\',
      \'created\' => \'1421227544\',
      \'changed\' => \'1421227544\',
      \'tnid\' => \'129\',
      \'translate\' => \'0\',
      \'uuid\' => \'301e38d3-d0a4-442d-9354-889381acaeff\',
      \'revision_timestamp\' => \'1421227544\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">A Pro Oeconomica Egyesületet, a kolozsvári Babeş–Bolyai Tu­dományegyetem Közgazdaság- és Gazdálkodástudományi Kar magyar tagozatának háttérszervezetét 2006 áprilisában hozta létre az itt tanító magyar tanárok közössége a következő célokkal: a magyar nyelvű állami közgazdasági képzés fejlesztése és népszerűsítése; szakkönyvek, szakjegyzetek szerkesztése és közlése; a közgazdaságtudományi kutatási tevékenység támogatá­sa; tudományos és szakmai találkozók, konferenciák szerve­zése; a hallgatók szakmai tevékenységének támogatása; olyan – magán vagy állami – szervezetekkel való kapcsolat megteremtése, amely hozzájárulhat a szervezet céljainak megvalósításához.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">A Pro Oeconomica Egyesületet, a kolozsvári Babeş–Bolyai Tu­dományegyetem Közgazdaság- és Gazdálkodástudományi Kar magyar tagozatának háttérszervezetét 2006 áprilisában hozta létre az itt tanító magyar tanárok közössége a következő célokkal: a magyar nyelvű állami közgazdasági képzés fejlesztése és népszerűsítése; szakkönyvek, szakjegyzetek szerkesztése és közlése; a közgazdaságtudományi kutatási tevékenység támogatá­sa; tudományos és szakmai találkozók, konferenciák szerve­zése; a hallgatók szakmai tevékenységének támogatása; olyan – magán vagy állami – szervezetekkel való kapcsolat megteremtése, amely hozzájárulhat a szervezet céljainak megvalósításához.</p>\\n",
          ),
        ),
      ),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.kmei.ro/index.php/rolunk/tagszervezetek\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'59\',
            \'uid\' => \'3\',
            \'filename\' => \'prooeconomicalogo.jpg\',
            \'uri\' => \'public://prooeconomicalogo.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'33035\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421227475\',
            \'type\' => \'image\',
            \'uuid\' => \'4769f518-1c62-4a5f-adf2-beb41519291c\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'812\',
              \'height\' => \'375\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'812\',
            \'height\' => \'375\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421227544\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'139\',
        \'source\' => \'node/130\',
        \'alias\' => \'pro-oeconomica-association\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1004\',
      \'uid\' => \'3\',
      \'title\' => \'Autonet\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'2e2ae2a4-a59a-4b56-af26-a210b74fed2e\',
      \'nid\' => \'1004\',
      \'type\' => \'organizations\',
      \'language\' => \'en\',
      \'created\' => \'1423227928\',
      \'changed\' => \'1423227995\',
      \'tnid\' => \'887\',
      \'translate\' => \'0\',
      \'uuid\' => \'379fb81b-2c66-42c5-8c84-45c21b054bf6\',
      \'revision_timestamp\' => \'1423227995\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>The&nbsp;<strong>Autonet</strong>&nbsp;group of businesses consists of companies that deal with specific segments of the&nbsp; automotive field:</p>\\r\\n\\r\\n<p><strong>SC Autonet Import SRL</strong>, in close relation to&nbsp;&nbsp;<strong>Autonet Import Magyarország KFT</strong>, imports and distributes auto spare parts to our customers in both Romania and Hungary.</p>\\r\\n\\r\\n<p><strong>Lubexpert</strong>&nbsp;manages the lubricants, while&nbsp;<strong>Forsius</strong>&nbsp;the paints, with import and&nbsp; distribution as their main activities.</p>\\r\\n\\r\\n<p><strong>Consult Scolari</strong>&nbsp;is our partner in providing skills development trainings&nbsp; and other professional services&nbsp; in adult education and life-long learning.</p>\\r\\n\\r\\n<p><strong>Partslife</strong>&nbsp;offers solutions for treating and recycling the waste produced by the automotive industry.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>The <strong>Autonet</strong> group of businesses consists of companies that deal with specific segments of the  automotive field:</p>\\n<p><strong>SC Autonet Import SRL</strong>, in close relation to  <strong>Autonet Import Magyarország KFT</strong>, imports and distributes auto spare parts to our customers in both Romania and Hungary.</p>\\n<p><strong>Lubexpert</strong> manages the lubricants, while <strong>Forsius</strong> the paints, with import and  distribution as their main activities.</p>\\n<p><strong>Consult Scolari</strong> is our partner in providing skills development trainings  and other professional services  in adult education and life-long learning.</p>\\n<p><strong>Partslife</strong> offers solutions for treating and recycling the waste produced by the automotive industry.</p>\\n",
          ),
        ),
      ),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.autonet-group.ro/en/autonetgrouppress/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'625\',
            \'uid\' => \'4\',
            \'filename\' => \'Vectra-Racing.jpg\',
            \'uri\' => \'public://Vectra-Racing_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'7064\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422005926\',
            \'type\' => \'image\',
            \'uuid\' => \'ff7725c3-93ca-46da-89e5-7a238f61a002\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'380\',
              \'height\' => \'185\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'380\',
            \'height\' => \'185\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1423227928\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1015\',
        \'source\' => \'node/1004\',
        \'alias\' => \'autonet\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1\',
      \'uid\' => \'1\',
      \'title\' => \' Célok\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'496e9bab-4f4b-463e-9201-2c2773186dd5\',
      \'nid\' => \'1\',
      \'type\' => \'gtk_simple_page\',
      \'language\' => \'hu\',
      \'created\' => \'1421013979\',
      \'changed\' => \'1425030483\',
      \'tnid\' => \'1\',
      \'translate\' => \'0\',
      \'uuid\' => \'3c6297f3-3401-4261-a44d-b32d37769b6f\',
      \'revision_timestamp\' => \'1425030483\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<h2 class=\\"rtejustify\\">A GTK küldetése:</h2>\\r\\n\\r\\n<p class=\\"rtejustify\\">A GTK küldetése, hogy hozzájáruljon a kiemelkedően tehetséges egyetemi hallgatók egyetemi oktatáson kívüli szakmai fejlődéséhez azáltal, hogy a tagok&nbsp;valós vagy a gyakorlathoz közel álló szituációkban&nbsp;tanulják meg alkalmazni az egyetem padjaiban elsajátítottakat.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">További célunk, hogy 5 év múlva a végzett alumnik 60% százaléka legalább középvezetői szinten legyen, saját vállalkozása legyen, vagy nemzetközi tanácsadó cégnél dolgozzon két év munkatapasztalat után.</p>\\r\\n\\r\\n<hr />\\r\\n<h2 class=\\"rtejustify\\">Szervezeti részcélok (részlet):</h2>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Vezetőképzős tartalmi fókusz</strong></p>\\r\\n\\r\\n<ol>\\r\\n\\t<li class=\\"rtejustify\\">Kidolgozott gyakorlati vezetőképző program kialakítása.</li>\\r\\n\\t<li class=\\"rtejustify\\">Félévente legalább három esettanulmány oldó képzés.</li>\\r\\n\\t<li class=\\"rtejustify\\">Kiegészítő jellegű és olyan típusú képzés, olyan ismeretek átadására, amelyek elsajátítására az Egyetem keretén belül nem jut elég lehetőség.&nbsp; Prioritásos területek: kommunikáció, piackutatás, stratégiai menedzsment, kontrolling, legújabb online megoldások, legújabb szervezet építési megoldások, szociális vállalkozások, társadalmi felelősségvállalás, vállalati pénzügyek, start-upok, innováció, cloud-financing, sharing economy.</li>\\r\\n\\t<li class=\\"rtejustify\\">Kizárólag gyakorlati ismeretekre fókuszálunk, prioritásosnak tekintjük a gyakorló vállalati szakemberek szakmai inputjait. Félévente legalább két híres gyakorló szakembertől vonjunk be információkat vagy feedback-et.</li>\\r\\n\\t<li class=\\"rtejustify\\">A képzéseknek legfennebb 30%-a lehet olyan, ami hiányában van a romániai példának, vagy romániai konkrétumoknak.</li>\\r\\n</ol>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Nemzetköziesedés:</strong></p>\\r\\n\\r\\n<ol>\\r\\n\\t<li>Évente legalább egy Magyarországon kívüli nemzetközi esettanulmány-versenyen való részvétel.</li>\\r\\n\\t<li>Évente legalább egy Közép Európán kívüli nemzetközi szintű előadó.</li>\\r\\n\\t<li>Évente legalább két diák Magyarországon kívüli nemzetközi tapasztalathoz való hozzásegítése.&nbsp;</li>\\r\\n\\t<li>Szakmai kapcsolat kiépítése külföldi (nyugat-európai) tanácsadó klubokkal, vagy hasonló szervezetekkel.</li>\\r\\n</ol>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Horizontális és vertikális bővítése a GTK-nak mindaddig, amíg ez nem megy a fókuszáltság és minőség rovására.</strong></p>\\r\\n\\r\\n<ol>\\r\\n\\t<li><em>Horizontális bővítés:</em>\\r\\n\\r\\n\\t<ol>\\r\\n\\t\\t<li>Más tudományterületek fele való nyitás a GTK középiskolás program keretén belül történik. A végzettek GTK középiskolás alumni státuszba kerülnek. Nyitott a részvételük az összes programba kivéve iparágelemzésbe és esettanulmány-oldásba.</li>\\r\\n\\t\\t<li>Felvételi kritériumok standardizálása, párhuzamosan a bennmaradási követelmények szigorításával.</li>\\r\\n\\t</ol>\\r\\n\\t</li>\\r\\n\\t<li><em>Vertikális bővítés: </em>\\r\\n\\t<ol>\\r\\n\\t\\t<li>Alumni hálózat erősítése és a céges kapcsolatok bővítése.</li>\\r\\n\\t\\t<li>Erdély szintű középiskolás program elérése a cél.</li>\\r\\n\\t\\t<li>Évente legalább egy új céget bekapcsolni a Shadowing programokba, legalább két új céget a támogatók közé, és legalább egy olyant, amelyikkel valamilyen más fajta szakmai kapcsolatot indítunk el.</li>\\r\\n\\t</ol>\\r\\n\\t</li>\\r\\n</ol>\\r\\n\\r\\n<h2 class=\\"rtejustify\\">&nbsp;</h2>\\r\\n\\r\\n<h2 class=\\"rtejustify\\">A GTK jellege és az egyetemi tevékenységekhez való kapcsolódása:</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li class=\\"rtejustify\\">A GTK a kolozsvári Babeş-Bolyai Tudományegyetem, Közgazdaság- és Gazdálkodástudományi Karának magyar tagozatos hallgatóinak <em>gazdasági tanácsadásban</em> specializálódó öntevékeny munkacsoportja.</li>\\r\\n\\t<li class=\\"rtejustify\\">A GTK szervesen <em>nem kapcsolódik az egyetemi oktatás programjához</em>, egyetemi oktatók, vállalatvezetők és gyakorló szakemberek egyaránt részt vesznek a munkában.</li>\\r\\n\\t<li class=\\"rtejustify\\">A GTK kimondottan egy olyan lehetőség-többlet, amely a tagok számára az <em>egyetemi oktatáson kívüli egyéni szakmai fejlődéshez</em> kíván hozzájárulni.</li>\\r\\n\\t<li class=\\"rtejustify\\">A GTK elsődleges prioritásként kezeli ahhoz a realitáshoz való alkalmazkodást, miszerint a közgazdász egyetemi végzetteink nagy része nem elméleti, hanem <em>csapatban dolgozó gyakorló szakemberré válik</em>.</li>\\r\\n\\t<li class=\\"rtejustify\\">A GTK az<em> egyetem hírnevét </em>elsődlegesen végzőseink jövőbeli karrierjével, a szakkollégium vállalati kapcsolataival, valamint a hazai és nemzetközi egyetemista versenyeken való képviselettel és az ezeken elért eredményekkel kívánja öregbíteni.</li>\\r\\n</ul>\\r\\n\\r\\n<p class=\\"rtejustify\\">&nbsp;</p>\\r\\n\\r\\n<h2 class=\\"rtejustify\\">A GTK jogi háttérszervezetei és vállalati kapcsolatainak természete:</h2>\\r\\n\\r\\n<ul>\\r\\n\\t<li class=\\"rtejustify\\">A GTK működési kereteit az <em>Antal Zsolt Alapítvány</em>&nbsp;biztosítja.</li>\\r\\n\\t<li class=\\"rtejustify\\">A GTK a Kolozsvári Magyar Egyetemi Intézetben <em>szakkollégiumi státus</em>sal rendelkezik.</li>\\r\\n\\t<li class=\\"rtejustify\\">A GTK programjaiban aktívan részt vesznek olyan <em>vállalati szakemberek</em>, akik személyes tapasztalatukat és tudásukat osztják meg a tagokkal, valamint menedzsment shadowing programokat biztosítanak a számukra.</li>\\r\\n</ul>\\r\\n",
            \'format\' => \'full_html\',
            \'safe_value\' => "<h2 class=\\"rtejustify\\">A GTK küldetése:</h2>\\n<p class=\\"rtejustify\\">A GTK küldetése, hogy hozzájáruljon a kiemelkedően tehetséges egyetemi hallgatók egyetemi oktatáson kívüli szakmai fejlődéséhez azáltal, hogy a tagok valós vagy a gyakorlathoz közel álló szituációkban tanulják meg alkalmazni az egyetem padjaiban elsajátítottakat.</p>\\n<p class=\\"rtejustify\\">További célunk, hogy 5 év múlva a végzett alumnik 60% százaléka legalább középvezetői szinten legyen, saját vállalkozása legyen, vagy nemzetközi tanácsadó cégnél dolgozzon két év munkatapasztalat után.</p>\\n<hr /><h2 class=\\"rtejustify\\">Szervezeti részcélok (részlet):</h2>\\n<p class=\\"rtejustify\\"><strong>Vezetőképzős tartalmi fókusz</strong></p>\\n<ol><li class=\\"rtejustify\\">Kidolgozott gyakorlati vezetőképző program kialakítása.</li>\\n<li class=\\"rtejustify\\">Félévente legalább három esettanulmány oldó képzés.</li>\\n<li class=\\"rtejustify\\">Kiegészítő jellegű és olyan típusú képzés, olyan ismeretek átadására, amelyek elsajátítására az Egyetem keretén belül nem jut elég lehetőség.  Prioritásos területek: kommunikáció, piackutatás, stratégiai menedzsment, kontrolling, legújabb online megoldások, legújabb szervezet építési megoldások, szociális vállalkozások, társadalmi felelősségvállalás, vállalati pénzügyek, start-upok, innováció, cloud-financing, sharing economy.</li>\\n<li class=\\"rtejustify\\">Kizárólag gyakorlati ismeretekre fókuszálunk, prioritásosnak tekintjük a gyakorló vállalati szakemberek szakmai inputjait. Félévente legalább két híres gyakorló szakembertől vonjunk be információkat vagy feedback-et.</li>\\n<li class=\\"rtejustify\\">A képzéseknek legfennebb 30%-a lehet olyan, ami hiányában van a romániai példának, vagy romániai konkrétumoknak.</li>\\n</ol><p class=\\"rtejustify\\"><strong>Nemzetköziesedés:</strong></p>\\n<ol><li>Évente legalább egy Magyarországon kívüli nemzetközi esettanulmány-versenyen való részvétel.</li>\\n<li>Évente legalább egy Közép Európán kívüli nemzetközi szintű előadó.</li>\\n<li>Évente legalább két diák Magyarországon kívüli nemzetközi tapasztalathoz való hozzásegítése. </li>\\n<li>Szakmai kapcsolat kiépítése külföldi (nyugat-európai) tanácsadó klubokkal, vagy hasonló szervezetekkel.</li>\\n</ol><p class=\\"rtejustify\\"><strong>Horizontális és vertikális bővítése a GTK-nak mindaddig, amíg ez nem megy a fókuszáltság és minőség rovására.</strong></p>\\n<ol><li><em>Horizontális bővítés:</em>\\n<ol><li>Más tudományterületek fele való nyitás a GTK középiskolás program keretén belül történik. A végzettek GTK középiskolás alumni státuszba kerülnek. Nyitott a részvételük az összes programba kivéve iparágelemzésbe és esettanulmány-oldásba.</li>\\n<li>Felvételi kritériumok standardizálása, párhuzamosan a bennmaradási követelmények szigorításával.</li>\\n</ol></li>\\n<li><em>Vertikális bővítés: </em>\\n<ol><li>Alumni hálózat erősítése és a céges kapcsolatok bővítése.</li>\\n<li>Erdély szintű középiskolás program elérése a cél.</li>\\n<li>Évente legalább egy új céget bekapcsolni a Shadowing programokba, legalább két új céget a támogatók közé, és legalább egy olyant, amelyikkel valamilyen más fajta szakmai kapcsolatot indítunk el.</li>\\n</ol></li>\\n</ol><h2 class=\\"rtejustify\\"> </h2>\\n<h2 class=\\"rtejustify\\">A GTK jellege és az egyetemi tevékenységekhez való kapcsolódása:</h2>\\n<ul><li class=\\"rtejustify\\">A GTK a kolozsvári Babeş-Bolyai Tudományegyetem, Közgazdaság- és Gazdálkodástudományi Karának magyar tagozatos hallgatóinak <em>gazdasági tanácsadásban</em> specializálódó öntevékeny munkacsoportja.</li>\\n<li class=\\"rtejustify\\">A GTK szervesen <em>nem kapcsolódik az egyetemi oktatás programjához</em>, egyetemi oktatók, vállalatvezetők és gyakorló szakemberek egyaránt részt vesznek a munkában.</li>\\n<li class=\\"rtejustify\\">A GTK kimondottan egy olyan lehetőség-többlet, amely a tagok számára az <em>egyetemi oktatáson kívüli egyéni szakmai fejlődéshez</em> kíván hozzájárulni.</li>\\n<li class=\\"rtejustify\\">A GTK elsődleges prioritásként kezeli ahhoz a realitáshoz való alkalmazkodást, miszerint a közgazdász egyetemi végzetteink nagy része nem elméleti, hanem <em>csapatban dolgozó gyakorló szakemberré válik</em>.</li>\\n<li class=\\"rtejustify\\">A GTK az<em> egyetem hírnevét </em>elsődlegesen végzőseink jövőbeli karrierjével, a szakkollégium vállalati kapcsolataival, valamint a hazai és nemzetközi egyetemista versenyeken való képviselettel és az ezeken elért eredményekkel kívánja öregbíteni.</li>\\n</ul><p class=\\"rtejustify\\"> </p>\\n<h2 class=\\"rtejustify\\">A GTK jogi háttérszervezetei és vállalati kapcsolatainak természete:</h2>\\n<ul><li class=\\"rtejustify\\">A GTK működési kereteit az <em>Antal Zsolt Alapítvány</em> biztosítja.</li>\\n<li class=\\"rtejustify\\">A GTK a Kolozsvári Magyar Egyetemi Intézetben <em>szakkollégiumi státus</em>sal rendelkezik.</li>\\n<li class=\\"rtejustify\\">A GTK programjaiban aktívan részt vesznek olyan <em>vállalati szakemberek</em>, akik személyes tapasztalatukat és tudásukat osztják meg a tagokkal, valamint menedzsment shadowing programokat biztosítanak a számukra.</li>\\n</ul>",
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_simple_pages\' => array(),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421013979\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'gtkAdmin\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'9\',
        \'source\' => \'node/1\',
        \'alias\' => \'celok\',
        \'language\' => \'hu\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Rólunk\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-49\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'1\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'118\',
      \'uid\' => \'3\',
      \'title\' => \'GTK High School Program\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b29e6ef7-e370-4cb0-8b5e-b24e72dc38de\',
      \'nid\' => \'118\',
      \'type\' => \'gtk_simple_page\',
      \'language\' => \'en\',
      \'created\' => \'1421226404\',
      \'changed\' => \'1421226404\',
      \'tnid\' => \'117\',
      \'translate\' => \'0\',
      \'uuid\' => \'3f19a45f-561e-48dd-9cb0-093234be7fde\',
      \'revision_timestamp\' => \'1421226404\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">The GTK High School Program by GTK – Business Consulting Club was initiated as a pilot project in 2014, and targets&nbsp;<strong>high schools students from Cluj-Napoca</strong>. The program is managed and carried out by the coordinators and alumni members of the club.</p>\\r\\n\\r\\n<div>\\r\\n<div>\\r\\n<p class=\\"rtejustify\\">The&nbsp;<strong>objectives</strong>&nbsp;of the GTK High School Program:</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li class=\\"rtejustify\\">The transfer of a&nbsp;<strong>practice-oriented business knowledge</strong>&nbsp;through the interactive teaching of business planning techniques, which is able to complete economics and entrepreneurship theories provided at high schools</li>\\r\\n\\t<li class=\\"rtejustify\\">To provide an appropriate framework for&nbsp;<strong>learning the basics of a business logic</strong>&nbsp;that can be used by students in the future to reach any business, or not business related, objectives</li>\\r\\n\\t<li class=\\"rtejustify\\">The&nbsp;<strong>professional diversification</strong>&nbsp;of the GTK – Business Consulting Club members in the long run</li>\\r\\n</ul>\\r\\n\\r\\n<p class=\\"rtejustify\\">The Program is built on five courses held by alumni members. Participants are working in teams on their business idea, and after every course they receive specific tasks related to the subjects discussed. Tasks should be solved until the next deadline and are evaluated by the corresponding lecturer.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">The structure of the program:</p>\\r\\n\\r\\n<ol>\\r\\n\\t<li class=\\"rtejustify\\">Entrepreneurial behavior, enterprise, business idea, market analysis&nbsp;</li>\\r\\n\\t<li class=\\"rtejustify\\">Operations planning, human resource management</li>\\r\\n\\t<li class=\\"rtejustify\\">Marketing</li>\\r\\n\\t<li class=\\"rtejustify\\">Finance</li>\\r\\n\\t<li class=\\"rtejustify\\">Presentation techniques</li>\\r\\n</ol>\\r\\n\\r\\n<p class=\\"rtejustify\\">As a closing moment of the program the teams will have the chance to&nbsp;<strong>present their complete business plan in front of a jury</strong>&nbsp;composed by academic and business professionals.</p>\\r\\n</div>\\r\\n</div>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">The GTK High School Program by GTK – Business Consulting Club was initiated as a pilot project in 2014, and targets <strong>high schools students from Cluj-Napoca</strong>. The program is managed and carried out by the coordinators and alumni members of the club.</p>\\n<p class=\\"rtejustify\\">The <strong>objectives</strong> of the GTK High School Program:</p>\\n<ul><li class=\\"rtejustify\\">The transfer of a <strong>practice-oriented business knowledge</strong> through the interactive teaching of business planning techniques, which is able to complete economics and entrepreneurship theories provided at high schools</li>\\n<li class=\\"rtejustify\\">To provide an appropriate framework for <strong>learning the basics of a business logic</strong> that can be used by students in the future to reach any business, or not business related, objectives</li>\\n<li class=\\"rtejustify\\">The <strong>professional diversification</strong> of the GTK – Business Consulting Club members in the long run</li>\\n</ul><p class=\\"rtejustify\\">The Program is built on five courses held by alumni members. Participants are working in teams on their business idea, and after every course they receive specific tasks related to the subjects discussed. Tasks should be solved until the next deadline and are evaluated by the corresponding lecturer.</p>\\n<p class=\\"rtejustify\\">The structure of the program:</p>\\n<ol><li class=\\"rtejustify\\">Entrepreneurial behavior, enterprise, business idea, market analysis </li>\\n<li class=\\"rtejustify\\">Operations planning, human resource management</li>\\n<li class=\\"rtejustify\\">Marketing</li>\\n<li class=\\"rtejustify\\">Finance</li>\\n<li class=\\"rtejustify\\">Presentation techniques</li>\\n</ol><p class=\\"rtejustify\\">As a closing moment of the program the teams will have the chance to <strong>present their complete business plan in front of a jury</strong> composed by academic and business professionals.</p>\\n",
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_simple_pages\' => array(),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421226404\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'127\',
        \'source\' => \'node/118\',
        \'alias\' => \'gtk-high-school-program\',
        \'language\' => \'en\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Highschool Program\',
        \'mlid\' => 0,
        \'plid\' => \'476\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'3\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => TRUE,
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'160\',
      \'uid\' => \'3\',
      \'title\' => \'Legyen támogatónk!\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'213937f1-1a71-463a-ad70-a538d2bf5c75\',
      \'nid\' => \'160\',
      \'type\' => \'gtk_simple_page\',
      \'language\' => \'en\',
      \'created\' => \'1421229358\',
      \'changed\' => \'1421229358\',
      \'tnid\' => \'159\',
      \'translate\' => \'0\',
      \'uuid\' => \'47053f39-dc84-4b59-80d8-d0dc912937c6\',
      \'revision_timestamp\' => \'1421229358\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">A Gazdasági Tanácsadó Klub kimondott célja, hogy az egyetemi képzésben résztvevő hallgatók számára egy olyan gyakorlati jellegű szakmai többletet és tapasztalatot nyújtson, amely segítségével tagjaink, az egyetemi képzés elvégzése után, nagyobb sikerrel válhatnak gyakorló, vállalati szakemberekké, vállalkozókká vagy menedzserekké. Ahhoz azonban, hogy jól képzett és a gyakorlati szférában a helyüket megálló pályakezdőket képezzünk, szükségünk van a vállalati és akadémiai szférával való együttműködésre és az Önök támogatásra.</p>\\r\\n\\r\\n<div>\\r\\n<div>\\r\\n<p class=\\"rtejustify\\">Amennyiben Ön, mint magánszemély vagy jogi személyi képviselő, képzésünkhöz személyi jövedelemadója 2%-ának felajánlásával vagy más anyagi jellegű támogatással hozzá szeretne járulni, ezt tisztelettel és lehetőségeink szerint nyilvános köszönetnyilvánítással fogadjuk.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Amennyiben Ön, mint vállalati döntéshozó, gyakorló szakember vagy a reál szférában jelentős gyakorlati tapasztalattal rendelkező egyetemi oktató, fontosnak tartja, hogy a megfelelő színvonalú és gyakorlatias „utánpótlásképzést” tudásával, tapasztalatai megosztásával támogassa, akkor szívesen fogadjuk a támogatását (az alábbiak közül bármilyen formában):</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li class=\\"rtejustify\\">Üzleti témájú előadás megtartása hallgatóink számára,</li>\\r\\n\\t<li class=\\"rtejustify\\">Menedzsment shadowing lehetőségek biztosítása,</li>\\r\\n\\t<li class=\\"rtejustify\\">Más, a céljainknak megfelelő együttműködési lehetőségek felajánlása.</li>\\r\\n</ul>\\r\\n\\r\\n<p class=\\"rtejustify\\">Támogatási szándékát kérjük, jelezze az&nbsp;<a href=\\"http://us.mc448.mail.yahoo.com/mc/compose?to=office@gtk.ro\\" target=\\"_blank\\">office@gtk.ro</a>&nbsp;e-mail címen vagy üzenet küldésével a&nbsp;<a href=\\"http://gtk.ro/kapcsolat\\" target=\\"_blank\\">Kapcsolat</a>&nbsp;menüpont alatt.</p>\\r\\n</div>\\r\\n</div>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">A Gazdasági Tanácsadó Klub kimondott célja, hogy az egyetemi képzésben résztvevő hallgatók számára egy olyan gyakorlati jellegű szakmai többletet és tapasztalatot nyújtson, amely segítségével tagjaink, az egyetemi képzés elvégzése után, nagyobb sikerrel válhatnak gyakorló, vállalati szakemberekké, vállalkozókká vagy menedzserekké. Ahhoz azonban, hogy jól képzett és a gyakorlati szférában a helyüket megálló pályakezdőket képezzünk, szükségünk van a vállalati és akadémiai szférával való együttműködésre és az Önök támogatásra.</p>\\n<p class=\\"rtejustify\\">Amennyiben Ön, mint magánszemély vagy jogi személyi képviselő, képzésünkhöz személyi jövedelemadója 2%-ának felajánlásával vagy más anyagi jellegű támogatással hozzá szeretne járulni, ezt tisztelettel és lehetőségeink szerint nyilvános köszönetnyilvánítással fogadjuk.</p>\\n<p class=\\"rtejustify\\">Amennyiben Ön, mint vállalati döntéshozó, gyakorló szakember vagy a reál szférában jelentős gyakorlati tapasztalattal rendelkező egyetemi oktató, fontosnak tartja, hogy a megfelelő színvonalú és gyakorlatias „utánpótlásképzést” tudásával, tapasztalatai megosztásával támogassa, akkor szívesen fogadjuk a támogatását (az alábbiak közül bármilyen formában):</p>\\n<ul><li class=\\"rtejustify\\">Üzleti témájú előadás megtartása hallgatóink számára,</li>\\n<li class=\\"rtejustify\\">Menedzsment shadowing lehetőségek biztosítása,</li>\\n<li class=\\"rtejustify\\">Más, a céljainknak megfelelő együttműködési lehetőségek felajánlása.</li>\\n</ul><p class=\\"rtejustify\\">Támogatási szándékát kérjük, jelezze az <a href=\\"http://us.mc448.mail.yahoo.com/mc/compose?to=office@gtk.ro\\" target=\\"_blank\\">office@gtk.ro</a> e-mail címen vagy üzenet küldésével a <a href=\\"http://gtk.ro/kapcsolat\\" target=\\"_blank\\">Kapcsolat</a> menüpont alatt.</p>\\n",
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_simple_pages\' => array(),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421229358\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'169\',
        \'source\' => \'node/160\',
        \'alias\' => \'legyen-támogatónk\',
        \'language\' => \'en\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Support Us!\',
        \'mlid\' => 0,
        \'plid\' => \'489\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'2\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => TRUE,
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1284\',
      \'uid\' => \'3\',
      \'title\' => \'East Consulting\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'97b27f6c-0e0e-4888-8352-6db22caa01f6\',
      \'nid\' => \'1284\',
      \'type\' => \'organizations\',
      \'language\' => \'ro\',
      \'created\' => \'1425040918\',
      \'changed\' => \'1425040918\',
      \'tnid\' => \'135\',
      \'translate\' => \'0\',
      \'uuid\' => \'4bddb665-ff0f-4206-ab86-1a27cb046b05\',
      \'revision_timestamp\' => \'1425040918\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_organization_link\' => array(),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'624\',
            \'uid\' => \'4\',
            \'filename\' => \'eastlogo_0_0.jpg\',
            \'uri\' => \'public://eastlogo_0_0_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'5753\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422005820\',
            \'type\' => \'image\',
            \'uuid\' => \'1dc20243-8743-4d35-af56-30186b7f1b4d\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'380\',
              \'height\' => \'185\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'380\',
            \'height\' => \'185\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1425040918\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1296\',
        \'source\' => \'node/1284\',
        \'alias\' => \'east-consulting\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'135\',
      \'uid\' => \'3\',
      \'title\' => \'East Consulting\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'315355c1-8574-4656-9120-9f2fd7ad4d34\',
      \'nid\' => \'135\',
      \'type\' => \'organizations\',
      \'language\' => \'hu\',
      \'created\' => \'1421228010\',
      \'changed\' => \'1422005820\',
      \'tnid\' => \'135\',
      \'translate\' => \'0\',
      \'uuid\' => \'5351b458-0265-4290-b8ea-ea6636fa5684\',
      \'revision_timestamp\' => \'1422005820\',
      \'revision_uid\' => \'4\',
      \'field_body\' => array(),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_organization_link\' => array(),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'624\',
            \'uid\' => \'4\',
            \'filename\' => \'eastlogo_0_0.jpg\',
            \'uri\' => \'public://eastlogo_0_0_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'5753\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422005820\',
            \'type\' => \'image\',
            \'uuid\' => \'1dc20243-8743-4d35-af56-30186b7f1b4d\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'380\',
              \'height\' => \'185\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'380\',
            \'height\' => \'185\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421228010\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'144\',
        \'source\' => \'node/135\',
        \'alias\' => \'east-consulting\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'129\',
      \'uid\' => \'3\',
      \'title\' => \'Pro Oeconomica Egyesület\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'98653136-e326-4ee4-a27b-659e23d14018\',
      \'nid\' => \'129\',
      \'type\' => \'organizations\',
      \'language\' => \'hu\',
      \'created\' => \'1421227475\',
      \'changed\' => \'1422005608\',
      \'tnid\' => \'129\',
      \'translate\' => \'0\',
      \'uuid\' => \'5492895b-fd02-4685-a437-bd3085b0c436\',
      \'revision_timestamp\' => \'1422005608\',
      \'revision_uid\' => \'4\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">A Pro Oeconomica Egyesületet, a kolozsvári Babeş–Bolyai Tu­dományegyetem Közgazdaság- és Gazdálkodástudományi Kar magyar tagozatának háttérszervezetét 2006 áprilisában hozta létre az itt tanító magyar tanárok közössége a következő célokkal: a magyar nyelvű állami közgazdasági képzés fejlesztése és népszerűsítése; szakkönyvek, szakjegyzetek szerkesztése és közlése; a közgazdaságtudományi kutatási tevékenység támogatá­sa; tudományos és szakmai találkozók, konferenciák szerve­zése; a hallgatók szakmai tevékenységének támogatása; olyan – magán vagy állami – szervezetekkel való kapcsolat megteremtése, amely hozzájárulhat a szervezet céljainak megvalósításához.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">A Pro Oeconomica Egyesületet, a kolozsvári Babeş–Bolyai Tu­dományegyetem Közgazdaság- és Gazdálkodástudományi Kar magyar tagozatának háttérszervezetét 2006 áprilisában hozta létre az itt tanító magyar tanárok közössége a következő célokkal: a magyar nyelvű állami közgazdasági képzés fejlesztése és népszerűsítése; szakkönyvek, szakjegyzetek szerkesztése és közlése; a közgazdaságtudományi kutatási tevékenység támogatá­sa; tudományos és szakmai találkozók, konferenciák szerve­zése; a hallgatók szakmai tevékenységének támogatása; olyan – magán vagy állami – szervezetekkel való kapcsolat megteremtése, amely hozzájárulhat a szervezet céljainak megvalósításához.</p>\\n",
          ),
        ),
      ),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.kmei.ro/index.php/rolunk/tagszervezetek\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'622\',
            \'uid\' => \'4\',
            \'filename\' => \'prooeconomicalogo.jpg\',
            \'uri\' => \'public://prooeconomicalogo_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'7005\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422005608\',
            \'type\' => \'image\',
            \'uuid\' => \'c259c709-678e-44eb-a6be-11bcdc547583\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'381\',
              \'height\' => \'180\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'381\',
            \'height\' => \'180\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421227475\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'138\',
        \'source\' => \'node/129\',
        \'alias\' => \'pro-oeconomica-egyesület\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'886\',
      \'uid\' => \'3\',
      \'title\' => \'Kolozsvár 2015\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9020f51a-5505-4c87-b99c-ccc3309064f6\',
      \'nid\' => \'886\',
      \'type\' => \'organizations\',
      \'language\' => \'hu\',
      \'created\' => \'1421758166\',
      \'changed\' => \'1422004759\',
      \'tnid\' => \'886\',
      \'translate\' => \'0\',
      \'uuid\' => \'56d8bfef-1373-4681-b767-29b8b5259302\',
      \'revision_timestamp\' => \'1422004759\',
      \'revision_uid\' => \'4\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Kolozsvár viseli 2015-ben az Európa Ifjúsági Fővárosa címet, amelyet 49 európai várossal versenyezve nyert el.<br />\\r\\n<br />\\r\\n<strong>CÉLOK ÉS KÜLDETÉS</strong><br />\\r\\nA Program küldetése egy egyéves kolozsvári program keretében megerősíteni és támogatni a fiatalok és ifjúsági szervezetek aktív részvételét a társadalom változtatásában, területeink, kultúránk, erőnk, örömünk, víziónk és közös európai értékeink megosztása során egy fenntartható, felelős és befogadó városi fejlesztés folyamata által, olyan témákat érintve, mint az ifjúság felelősségvállalásának erősítése, képviselet, mozgósítás, strukturált párbeszéd és informálás.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Kolozsvár viseli 2015-ben az Európa Ifjúsági Fővárosa címet, amelyet 49 európai várossal versenyezve nyert el.</p>\\n<p><strong>CÉLOK ÉS KÜLDETÉS</strong><br />\\nA Program küldetése egy egyéves kolozsvári program keretében megerősíteni és támogatni a fiatalok és ifjúsági szervezetek aktív részvételét a társadalom változtatásában, területeink, kultúránk, erőnk, örömünk, víziónk és közös európai értékeink megosztása során egy fenntartható, felelős és befogadó városi fejlesztés folyamata által, olyan témákat érintve, mint az ifjúság felelősségvállalásának erősítése, képviselet, mozgósítás, strukturált párbeszéd és informálás.</p>\\n",
          ),
        ),
      ),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://kolozsvar2015.eu/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'609\',
            \'uid\' => \'4\',
            \'filename\' => \'logo_1.jpg\',
            \'uri\' => \'public://logo_1_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'5449\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422004759\',
            \'type\' => \'image\',
            \'uuid\' => \'780258ac-a95d-4db3-bf8a-52a85f40a9d1\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'380\',
              \'height\' => \'185\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'380\',
            \'height\' => \'185\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421758166\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'897\',
        \'source\' => \'node/886\',
        \'alias\' => \'kolozsvár-2015\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'121\',
      \'uid\' => \'3\',
      \'title\' => \'Felvételi\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'89aed544-ce0e-4a7a-bc87-868c6153cf90\',
      \'nid\' => \'121\',
      \'type\' => \'gtk_simple_page\',
      \'language\' => \'en\',
      \'created\' => \'1421226610\',
      \'changed\' => \'1421226610\',
      \'tnid\' => \'120\',
      \'translate\' => \'0\',
      \'uuid\' => \'57bef322-8ed6-4c22-9585-2d169322534d\',
      \'revision_timestamp\' => \'1421226610\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\"><strong>2014. októberében újra megnyitjuk az őszi felvételi folyamatot! Részletek lennebb...</strong></p>\\r\\n\\r\\n<div>\\r\\n<div>\\r\\n<p class=\\"rtejustify\\">&nbsp;</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">A kolozsvári Babeş-Bolyai Tudományegyetem Közgazdaság- és Gazdálkodástudományi Karának magyar tagozatos hallgatói körében 2008 óta minden évben újra meghirdetésre kerül a Gazdasági Tanácsadó Klubba való felvétel, két formában:</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li class=\\"rtejustify\\"><u><strong>Általános felvételi:</strong></u>&nbsp;minden év&nbsp;<strong>október/novemberében MINDEN</strong>&nbsp;kolozsvári BBTE KGTK magyar tagozatos hallgató pályázhat. Az általános felvételin felvételt nyert új tagok azonnal bekapcsolódnak minden GTK alapprogramba.</li>\\r\\n\\t<li class=\\"rtejustify\\"><u><strong>Kiegészítő felvételi:</strong></u><strong>&nbsp;</strong>minden év&nbsp;<strong>április/májusában</strong>&nbsp;minden olyan kolozsvári BBTE KGTK magyar tagozatos hallgató pályázhat, aki nem végzős mesteris, és az utolsó október/novemberi általános felvételi&nbsp;<strong>óta eltelt időszakban nemzetközi vagy helyi esettanulmány versenyen díjazott volt (beleértve dicséretet és különdíjat), vagy pedig hivatalosan dokumentálható okokból</strong>&nbsp;nem vehetett részt a legutóbbi általános felvételin. A hivatalosan dokumentálható okot a motivációs levélben, az esetverseny eredményt a CV-ben kérjük (esetenként) feltüntetni. A kiegészítő felvételi során bejutott új tagok csak a következő tanév kezdetekor (október) kapcsolódnak be minden GTK alapprogramba (féléves csoportos projekt, menedzsment shadowing), addig csak a GTK rendezvényeken való részvétel elvárt.</li>\\r\\n</ul>\\r\\n\\r\\n<p class=\\"rtejustify\\">&nbsp;</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong><u>A 2014. októberi felvételin való részvétel aktuális feltételei</u></strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">A 2014. év&nbsp;októberében rendezett felvételi&nbsp;<strong>általános felvételi.&nbsp;</strong>A maximálisan felvehető tagok száma:&nbsp;<strong>10 fő</strong>.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Standard Felvételi Eljárás</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><em>1. lépés – Önéletrajz, motivációs levél (pályázók)</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Fényképes önéletrajz és motivációs levél elküldése, elektronikusan,&nbsp;<u>2014. október 17. (péntek), 21:00 óráig</u>&nbsp;az&nbsp;<a href=\\"mailto:office@gtk.ro\\">office@gtk.ro</a>&nbsp;címre.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><em>2. lépés – esettanulmány (pályázók)</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">A jelentkező személyek legkésőbb&nbsp;<u>2014. október 17., 22:00 óráig</u>&nbsp;kapnak egy olyan esettanulmányt, amely megoldására irányuló, legfennebb 1 oldalas egyéni javaslataikat&nbsp;<u>2014. október 19. (vasárnap), 23:00 óráig</u><u>,</u>&nbsp;kell elküldeni az&nbsp;<a href=\\"mailto:office@gtk.ro\\">office@gtk.ro</a>&nbsp;címre.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><em>3. lépés – interjú (jelöltekké vált pályázók)</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Azok a pályázók, akik a koordinátorokból, külső szakemberekből és szenior tagokból álló Felvételi Bizottságtól (a beérkezett 3 dokumentum alapján: CV, motivációs levél, eset megoldás)&nbsp;<u>2014. október 20. (hétfő)</u><u>, 18:00 óráig</u>&nbsp;kapott visszajelzésük egy&nbsp;<u>2014. október 21-én, kedden</u>&nbsp;tartandó interjúra való meghívást is tartalmaz, azok a visszajelzéssel együtt közölt időpontban és helyszínen kell megjelenjenek a felvételi eljárás 3. lépésére, az interjúra.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><em>4. lépés – eredményhirdetés (jelöltek) és tevékenység indítása (új és régi tagok).</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Sok siker kívánunk minden jelentkezőnek!&nbsp;<br />\\r\\nA Felvételi Bizottság</strong></p>\\r\\n</div>\\r\\n</div>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\"><strong>2014. októberében újra megnyitjuk az őszi felvételi folyamatot! Részletek lennebb...</strong></p>\\n<p class=\\"rtejustify\\"> </p>\\n<p class=\\"rtejustify\\">A kolozsvári Babeş-Bolyai Tudományegyetem Közgazdaság- és Gazdálkodástudományi Karának magyar tagozatos hallgatói körében 2008 óta minden évben újra meghirdetésre kerül a Gazdasági Tanácsadó Klubba való felvétel, két formában:</p>\\n<ul><li class=\\"rtejustify\\"><u><strong>Általános felvételi:</strong></u> minden év <strong>október/novemberében MINDEN</strong> kolozsvári BBTE KGTK magyar tagozatos hallgató pályázhat. Az általános felvételin felvételt nyert új tagok azonnal bekapcsolódnak minden GTK alapprogramba.</li>\\n<li class=\\"rtejustify\\"><u><strong>Kiegészítő felvételi:</strong></u><strong> </strong>minden év <strong>április/májusában</strong> minden olyan kolozsvári BBTE KGTK magyar tagozatos hallgató pályázhat, aki nem végzős mesteris, és az utolsó október/novemberi általános felvételi <strong>óta eltelt időszakban nemzetközi vagy helyi esettanulmány versenyen díjazott volt (beleértve dicséretet és különdíjat), vagy pedig hivatalosan dokumentálható okokból</strong> nem vehetett részt a legutóbbi általános felvételin. A hivatalosan dokumentálható okot a motivációs levélben, az esetverseny eredményt a CV-ben kérjük (esetenként) feltüntetni. A kiegészítő felvételi során bejutott új tagok csak a következő tanév kezdetekor (október) kapcsolódnak be minden GTK alapprogramba (féléves csoportos projekt, menedzsment shadowing), addig csak a GTK rendezvényeken való részvétel elvárt.</li>\\n</ul><p class=\\"rtejustify\\"> </p>\\n<p class=\\"rtejustify\\"><strong><u>A 2014. októberi felvételin való részvétel aktuális feltételei</u></strong></p>\\n<p class=\\"rtejustify\\">A 2014. év októberében rendezett felvételi <strong>általános felvételi. </strong>A maximálisan felvehető tagok száma: <strong>10 fő</strong>.</p>\\n<p class=\\"rtejustify\\"><strong>Standard Felvételi Eljárás</strong></p>\\n<p class=\\"rtejustify\\"><em>1. lépés – Önéletrajz, motivációs levél (pályázók)</em></p>\\n<p class=\\"rtejustify\\">Fényképes önéletrajz és motivációs levél elküldése, elektronikusan, <u>2014. október 17. (péntek), 21:00 óráig</u> az <a href=\\"mailto:office@gtk.ro\\">office@gtk.ro</a> címre.</p>\\n<p class=\\"rtejustify\\"><em>2. lépés – esettanulmány (pályázók)</em></p>\\n<p class=\\"rtejustify\\">A jelentkező személyek legkésőbb <u>2014. október 17., 22:00 óráig</u> kapnak egy olyan esettanulmányt, amely megoldására irányuló, legfennebb 1 oldalas egyéni javaslataikat <u>2014. október 19. (vasárnap), 23:00 óráig</u><u>,</u> kell elküldeni az <a href=\\"mailto:office@gtk.ro\\">office@gtk.ro</a> címre.</p>\\n<p class=\\"rtejustify\\"><em>3. lépés – interjú (jelöltekké vált pályázók)</em></p>\\n<p class=\\"rtejustify\\">Azok a pályázók, akik a koordinátorokból, külső szakemberekből és szenior tagokból álló Felvételi Bizottságtól (a beérkezett 3 dokumentum alapján: CV, motivációs levél, eset megoldás) <u>2014. október 20. (hétfő)</u><u>, 18:00 óráig</u> kapott visszajelzésük egy <u>2014. október 21-én, kedden</u> tartandó interjúra való meghívást is tartalmaz, azok a visszajelzéssel együtt közölt időpontban és helyszínen kell megjelenjenek a felvételi eljárás 3. lépésére, az interjúra.</p>\\n<p class=\\"rtejustify\\"><em>4. lépés – eredményhirdetés (jelöltek) és tevékenység indítása (új és régi tagok).</em></p>\\n<p class=\\"rtejustify\\"><strong>Sok siker kívánunk minden jelentkezőnek! <br />\\nA Felvételi Bizottság</strong></p>\\n",
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_simple_pages\' => array(),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421226610\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'130\',
        \'source\' => \'node/121\',
        \'alias\' => \'felvételi\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'123\',
      \'uid\' => \'3\',
      \'title\' => \'Babeş–Bolyai Tudományegyetem\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f6fd37b5-75af-4ca3-b26b-2dab0589600f\',
      \'nid\' => \'123\',
      \'type\' => \'organizations\',
      \'language\' => \'hu\',
      \'created\' => \'1421226930\',
      \'changed\' => \'1422005621\',
      \'tnid\' => \'123\',
      \'translate\' => \'0\',
      \'uuid\' => \'5a50aa5c-9a06-46da-baa1-964a85e04b9a\',
      \'revision_timestamp\' => \'1422005621\',
      \'revision_uid\' => \'4\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><em>Küldetése</em></p>\\r\\n\\r\\n<p>A Babeş-Bolyai Tudományegyetem kiterjedt nemzetközi kapcsolatokkal rendelkező állami felsőoktatási intézmény, amely egyéni küldetése alapján arra hivatott, hogy lokális, regionális, nemzeti és nemzetközi viszonylatban a kulturális sajátosságok fenntartását, a kultúra dinamikáját biztosítsa.&nbsp;Jelen kontextusban ezek a sajátosságok az alábbiak szerint körvonalazódnak:</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>a szisztematikus és innovációs tudáson alapuló tevékenységek kultúrája&nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;&nbsp; &nbsp;</li>\\r\\n\\t<li>a személyes és morális fejlõdés kultúrája</li>\\r\\n\\t<li>állandó és innovációs tanulás kultúrája&nbsp;&nbsp; &nbsp;</li>\\r\\n\\t<li>a proaktív magatartás és részvétel kultúrája</li>\\r\\n\\t<li>multikulturalitás, kulturális dialógus és felekezetek közötti párbeszéd&nbsp;&nbsp;</li>\\r\\n\\t<li>a személyes fejlődés kultúrája</li>\\r\\n\\t<li>a tudományos és technológiai kompetenciák, szervezeti és állampolgári kompetenciák kultúrája&nbsp;&nbsp; &nbsp;</li>\\r\\n\\t<li>a globális folyamatokhoz való alkalmazkodás, a sokféleségbe történő integráció kultúrája, a kölcsönösség jegyében, valamint az identitás tiszteletben tartásával</li>\\r\\n</ul>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><em>Küldetése</em></p>\\n<p>A Babeş-Bolyai Tudományegyetem kiterjedt nemzetközi kapcsolatokkal rendelkező állami felsőoktatási intézmény, amely egyéni küldetése alapján arra hivatott, hogy lokális, regionális, nemzeti és nemzetközi viszonylatban a kulturális sajátosságok fenntartását, a kultúra dinamikáját biztosítsa. Jelen kontextusban ezek a sajátosságok az alábbiak szerint körvonalazódnak:</p>\\n<ul><li>a szisztematikus és innovációs tudáson alapuló tevékenységek kultúrája                </li>\\n<li>a személyes és morális fejlõdés kultúrája</li>\\n<li>állandó és innovációs tanulás kultúrája    </li>\\n<li>a proaktív magatartás és részvétel kultúrája</li>\\n<li>multikulturalitás, kulturális dialógus és felekezetek közötti párbeszéd  </li>\\n<li>a személyes fejlődés kultúrája</li>\\n<li>a tudományos és technológiai kompetenciák, szervezeti és állampolgári kompetenciák kultúrája    </li>\\n<li>a globális folyamatokhoz való alkalmazkodás, a sokféleségbe történő integráció kultúrája, a kölcsönösség jegyében, valamint az identitás tiszteletben tartásával</li>\\n</ul>",
          ),
        ),
      ),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://ubbcluj.ro/hu/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'623\',
            \'uid\' => \'4\',
            \'filename\' => \'ubb.jpg\',
            \'uri\' => \'public://ubb_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'11323\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422005621\',
            \'type\' => \'image\',
            \'uuid\' => \'894dbf64-f173-4082-a0e6-dd87ad5fbfea\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'380\',
              \'height\' => \'180\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'380\',
            \'height\' => \'180\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421226930\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'132\',
        \'source\' => \'node/123\',
        \'alias\' => \'babeş–bolyai-tudományegyetem\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1009\',
      \'uid\' => \'3\',
      \'title\' => \'Fundația Communitas \',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'08789608-fce9-4202-a766-71b7e5d2ac72\',
      \'nid\' => \'1009\',
      \'type\' => \'organizations\',
      \'language\' => \'ro\',
      \'created\' => \'1423228325\',
      \'changed\' => \'1423228325\',
      \'tnid\' => \'885\',
      \'translate\' => \'0\',
      \'uuid\' => \'5a679047-45e4-4f93-8dd5-2a95b0db3d56\',
      \'revision_timestamp\' => \'1423228325\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.communitas.ro/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'482\',
            \'uid\' => \'3\',
            \'filename\' => \'communitas_15ev_fekvo.png\',
            \'uri\' => \'public://communitas_15ev_fekvo.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'93659\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421758104\',
            \'type\' => \'image\',
            \'uuid\' => \'d35a50db-99dd-4d3a-8472-5e6c693054f3\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'976\',
              \'height\' => \'636\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'976\',
            \'height\' => \'636\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1423228325\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1020\',
        \'source\' => \'node/1009\',
        \'alias\' => \'fundația-communitas\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'906\',
      \'uid\' => \'3\',
      \'title\' => \'Közgazdaság- és Gazdálkodástudományi Kar\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'6dd5e491-87c5-4cf4-8b5f-b435f19d03fd\',
      \'nid\' => \'906\',
      \'type\' => \'organizations\',
      \'language\' => \'hu\',
      \'created\' => \'1421830546\',
      \'changed\' => \'1422004695\',
      \'tnid\' => \'906\',
      \'translate\' => \'0\',
      \'uuid\' => \'5e89457d-5fc5-4de1-a876-a3cb3fac9f6f\',
      \'revision_timestamp\' => \'1422004695\',
      \'revision_uid\' => \'4\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">A Babeş-Bolyai Tudományegyetem Közgazdaság- és Gazdálkodástudományi Kara a 2000-2001-es tanévtől kezdődően biztosít magyar nyelvű közgazdász képzést. A szervezetileg is különálló&nbsp;<strong>Közgazdaság- és Gazdálkodástudományi Magyar Intézet</strong>&nbsp;2011 októberében jött létre 21 főállású oktatóval. A magas színvonalú közgazdász képzést helyi és külföldi neves oktatók biztosítják.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Alapképzésen&nbsp;</strong>négy szakirányon kezdhetik meg tanulmányaikat a hallgatók: Gazdasági informatika, Marketing, Menedzsment, valamint Pénzügy és bank. Az érdeklődőknek három magyar nyelvű közgazdasági&nbsp;<strong>mesteri képzés</strong>t biztosítunk: Marketing stratégiák és politikák, Vállalati pénzügyi menedzsment, Vállalkozásmenedzsment. Intézetünk a nappali képzés mellett a hallgatóknak távoktatásos képzést is nyújt.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Az egyetemi kötelező tanterv mellett szakkollégiumi tevékenységek, esettanulmány versenyek, tudományos diákköri konferenciák, szakmai táborok, diákprogramok, meghívott neves hazai és külföldi gyakorló közgadászok és egyetemi oktatók előadásai szinesítik tevékenységeinket. Az elmúlt évtized munkájának eredményeit mutatják diákjaink elméleti és gyakorlati jellegű, hazai és nemzetközi versenyeken elért kimagasló eredményei.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Intézetünk tagjai számos szakterületet lefedő kutatómunkát is folytatnak. Több nemzetközi kutatási projekt tagjaiként eredményeiket tudományos publikációik, nemzetközi konferenciákon tartott előadásaik támasztják alá.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Intézetünk nemzetközi kapcsolatai lehetőséget biztosítanak hallgatóink számára a külföldi közgazdasági egyetemek oktatási programjain való részvételre.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">A Babeş-Bolyai Tudományegyetem Közgazdaság- és Gazdálkodástudományi Kara a 2000-2001-es tanévtől kezdődően biztosít magyar nyelvű közgazdász képzést. A szervezetileg is különálló <strong>Közgazdaság- és Gazdálkodástudományi Magyar Intézet</strong> 2011 októberében jött létre 21 főállású oktatóval. A magas színvonalú közgazdász képzést helyi és külföldi neves oktatók biztosítják.</p>\\n<p class=\\"rtejustify\\"><strong>Alapképzésen </strong>négy szakirányon kezdhetik meg tanulmányaikat a hallgatók: Gazdasági informatika, Marketing, Menedzsment, valamint Pénzügy és bank. Az érdeklődőknek három magyar nyelvű közgazdasági <strong>mesteri képzés</strong>t biztosítunk: Marketing stratégiák és politikák, Vállalati pénzügyi menedzsment, Vállalkozásmenedzsment. Intézetünk a nappali képzés mellett a hallgatóknak távoktatásos képzést is nyújt.</p>\\n<p class=\\"rtejustify\\">Az egyetemi kötelező tanterv mellett szakkollégiumi tevékenységek, esettanulmány versenyek, tudományos diákköri konferenciák, szakmai táborok, diákprogramok, meghívott neves hazai és külföldi gyakorló közgadászok és egyetemi oktatók előadásai szinesítik tevékenységeinket. Az elmúlt évtized munkájának eredményeit mutatják diákjaink elméleti és gyakorlati jellegű, hazai és nemzetközi versenyeken elért kimagasló eredményei.</p>\\n<p class=\\"rtejustify\\">Intézetünk tagjai számos szakterületet lefedő kutatómunkát is folytatnak. Több nemzetközi kutatási projekt tagjaiként eredményeiket tudományos publikációik, nemzetközi konferenciákon tartott előadásaik támasztják alá.</p>\\n<p class=\\"rtejustify\\">Intézetünk nemzetközi kapcsolatai lehetőséget biztosítanak hallgatóink számára a külföldi közgazdasági egyetemek oktatási programjain való részvételre.</p>\\n",
          ),
        ),
      ),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://hu.econ.ubbcluj.ro/intezetunkrol\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'608\',
            \'uid\' => \'4\',
            \'filename\' => \'fsega_0.jpg\',
            \'uri\' => \'public://fsega_0_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'7185\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422004695\',
            \'type\' => \'image\',
            \'uuid\' => \'272db08d-421a-492d-858c-0f220e4f5f82\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'381\',
              \'height\' => \'185\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'381\',
            \'height\' => \'185\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421830546\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'917\',
        \'source\' => \'node/906\',
        \'alias\' => \'közgazdaság-és-gazdálkodástudományi-kar\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'141\',
      \'uid\' => \'3\',
      \'title\' => \'Marso\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'7830af49-3ee8-4cf6-86b2-efe80846fb90\',
      \'nid\' => \'141\',
      \'type\' => \'organizations\',
      \'language\' => \'en\',
      \'created\' => \'1421228135\',
      \'changed\' => \'1421311471\',
      \'tnid\' => \'141\',
      \'translate\' => \'0\',
      \'uuid\' => \'68c29bc0-f8ca-4d09-b54c-7d5ed86e6ba7\',
      \'revision_timestamp\' => \'1421311471\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.marso.ro/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'63\',
            \'uid\' => \'3\',
            \'filename\' => \'marsologo.jpg\',
            \'uri\' => \'public://marsologo.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'47106\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421228135\',
            \'type\' => \'image\',
            \'uuid\' => \'b6a290f6-01de-4560-bbd3-2233ec42295b\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'500\',
              \'height\' => \'99\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'500\',
            \'height\' => \'99\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421228135\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'150\',
        \'source\' => \'node/141\',
        \'alias\' => \'marso\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'151\',
      \'uid\' => \'3\',
      \'title\' => \'Tipoholding\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'79a0f77e-6ae7-4517-ae79-dfef17a40321\',
      \'nid\' => \'151\',
      \'type\' => \'organizations\',
      \'language\' => \'hu\',
      \'created\' => \'1421228371\',
      \'changed\' => \'1422004836\',
      \'tnid\' => \'150\',
      \'translate\' => \'0\',
      \'uuid\' => \'6aba333d-4d59-4b8e-a4f7-f82b3939ecc4\',
      \'revision_timestamp\' => \'1422004836\',
      \'revision_uid\' => \'4\',
      \'field_body\' => array(),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://tipoholding.ro/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'611\',
            \'uid\' => \'4\',
            \'filename\' => \'tipologo.jpg\',
            \'uri\' => \'public://tipologo_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'6088\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422004836\',
            \'type\' => \'image\',
            \'uuid\' => \'80ed911c-0070-433f-bae1-db902d6b46e9\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'380\',
              \'height\' => \'180\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'380\',
            \'height\' => \'180\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421228371\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'160\',
        \'source\' => \'node/151\',
        \'alias\' => \'tipoholding\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'148\',
      \'uid\' => \'3\',
      \'title\' => \'Romespa\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c6f78192-e3cb-4f91-a49f-57c6aa17ecff\',
      \'nid\' => \'148\',
      \'type\' => \'organizations\',
      \'language\' => \'hu\',
      \'created\' => \'1421228292\',
      \'changed\' => \'1422005114\',
      \'tnid\' => \'147\',
      \'translate\' => \'0\',
      \'uuid\' => \'6db833b9-32b8-4373-8e82-e90e0c5f987f\',
      \'revision_timestamp\' => \'1422005114\',
      \'revision_uid\' => \'4\',
      \'field_body\' => array(),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'618\',
            \'uid\' => \'4\',
            \'filename\' => \'romespalogo.jpg\',
            \'uri\' => \'public://romespalogo_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'6128\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422005114\',
            \'type\' => \'image\',
            \'uuid\' => \'ae404ee2-6196-470c-88d8-3fcaf4064e9a\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'381\',
              \'height\' => \'152\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'381\',
            \'height\' => \'152\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421228292\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'157\',
        \'source\' => \'node/148\',
        \'alias\' => \'romespa\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'158\',
      \'uid\' => \'3\',
      \'title\' => \'Statutul membrilor\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4213e274-ecfe-4ca4-8f3b-7ebf0cb9adc1\',
      \'nid\' => \'158\',
      \'type\' => \'gtk_simple_page\',
      \'language\' => \'ro\',
      \'created\' => \'1421229093\',
      \'changed\' => \'1421229093\',
      \'tnid\' => \'156\',
      \'translate\' => \'0\',
      \'uuid\' => \'6fe5eae8-e9eb-4728-8e08-1f65dc352b52\',
      \'revision_timestamp\' => \'1421229093\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">GTK - Business Consulting Club&nbsp;este reprezentată de membrii juniori, membrii seniori (studenţi cu statut valabil de student la Universitatea Babeş-Bolyai din Cluj-Napoca, Departementul de Ştiinţe Economice şi Gestiunea Afacerilor în Limba Maghiară), respectiv membrii alumni (foşti membri juniori sau seniori) ai clubului, coordonaţi de profesori universitari şi specialişti din mediul de afaceri.</p>\\r\\n\\r\\n<div>\\r\\n<div>\\r\\n<p class=\\"rtejustify\\"><strong>Coordonatorii </strong>GTK&nbsp;iau decizii privind direcţia strategică a clubului, compoziţia programelor şi activităţilor, respectiv regulamentul de funcţionare al GTK-ului. Principiile care stau la baza deciziilor coordonatorilor sunt următoarele: contribuţia la creşterea reputaţiei universităţii, atingerea obiectivelor GTK, sprijinirea dezvoltării profesionale individuale a membrilor, lărgirea oportunităţilor profesionale ale membrilor, respectiv sincronizarea acestor obiective, fără obligaţii faţă de universitate sau mediul de afaceri.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Membrii juniori&nbsp;</strong>pot alătura GTK-ului după îndeplinirea cu succes a procesului de admintere, incluzând un interviu cu membrii seniori şi coordonatorii GTK. Statutul de membru junior are o durată de două semestre şi acordă dreptul de a participa la toate programele GTK. Studenţii de la Universitatea Babeş-Bolyai din Cluj-Napoca, Facultatea de Ştiinţe Economice şi Gestiunea Afacerilor, Departementul de Ştiinţe Economice şi Gestiunea Afacerilor în Limba Maghiară pot aplica la admitere, fără restricţii privind anul, specializarea sau nivelul de studii.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Membrii seniori&nbsp;</strong>îndeplinesc un rol de manager de proiect în cadrul programelor GTK, având sarcina de a coordona şi de a se consulta cu membrii juniori. Statultul de membru senior poate fi obţinută prin îndeplinirea cu succes a programelor GTK ca membru junior, este acordată de coordonatorii clubului, şi are o durată de două semestre.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Statutul de&nbsp;<strong>membru alumni</strong>&nbsp;poate fi obţinută prin îndeplinirea cu succes a programelor GTK ca membru junior sau membru senior, şi reprezintă statut etern de membru GTK. Membrii alumni nu se implică activ în programele GTK, dar au dreptul de a participa la orice activitate sau program organizat de către GTK.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Încetarea statutului de membru GTK se aplică în următoarele cazuri: incompatibilitate administrativă, intenţia unui membru, decizia coordonatorilor, sau de comun acord. În cazul neîndeplinirii cu succes a programelor GTK în timpul statutului de membru junior sau senior conduce la neacordarea statutului de membru alumni. În cazul membrilor GTK care se alătură clubului în ultimul semestru al studiilor de licenţă sau de masterat, acordarea statutului de membru alumni depinde de decizia coordonatorilor&nbsp;GTK.</p>\\r\\n</div>\\r\\n</div>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">GTK - Business Consulting Club este reprezentată de membrii juniori, membrii seniori (studenţi cu statut valabil de student la Universitatea Babeş-Bolyai din Cluj-Napoca, Departementul de Ştiinţe Economice şi Gestiunea Afacerilor în Limba Maghiară), respectiv membrii alumni (foşti membri juniori sau seniori) ai clubului, coordonaţi de profesori universitari şi specialişti din mediul de afaceri.</p>\\n<p class=\\"rtejustify\\"><strong>Coordonatorii </strong>GTK iau decizii privind direcţia strategică a clubului, compoziţia programelor şi activităţilor, respectiv regulamentul de funcţionare al GTK-ului. Principiile care stau la baza deciziilor coordonatorilor sunt următoarele: contribuţia la creşterea reputaţiei universităţii, atingerea obiectivelor GTK, sprijinirea dezvoltării profesionale individuale a membrilor, lărgirea oportunităţilor profesionale ale membrilor, respectiv sincronizarea acestor obiective, fără obligaţii faţă de universitate sau mediul de afaceri.</p>\\n<p class=\\"rtejustify\\"><strong>Membrii juniori </strong>pot alătura GTK-ului după îndeplinirea cu succes a procesului de admintere, incluzând un interviu cu membrii seniori şi coordonatorii GTK. Statutul de membru junior are o durată de două semestre şi acordă dreptul de a participa la toate programele GTK. Studenţii de la Universitatea Babeş-Bolyai din Cluj-Napoca, Facultatea de Ştiinţe Economice şi Gestiunea Afacerilor, Departementul de Ştiinţe Economice şi Gestiunea Afacerilor în Limba Maghiară pot aplica la admitere, fără restricţii privind anul, specializarea sau nivelul de studii.</p>\\n<p class=\\"rtejustify\\"><strong>Membrii seniori </strong>îndeplinesc un rol de manager de proiect în cadrul programelor GTK, având sarcina de a coordona şi de a se consulta cu membrii juniori. Statultul de membru senior poate fi obţinută prin îndeplinirea cu succes a programelor GTK ca membru junior, este acordată de coordonatorii clubului, şi are o durată de două semestre.</p>\\n<p class=\\"rtejustify\\">Statutul de <strong>membru alumni</strong> poate fi obţinută prin îndeplinirea cu succes a programelor GTK ca membru junior sau membru senior, şi reprezintă statut etern de membru GTK. Membrii alumni nu se implică activ în programele GTK, dar au dreptul de a participa la orice activitate sau program organizat de către GTK.</p>\\n<p class=\\"rtejustify\\">Încetarea statutului de membru GTK se aplică în următoarele cazuri: incompatibilitate administrativă, intenţia unui membru, decizia coordonatorilor, sau de comun acord. În cazul neîndeplinirii cu succes a programelor GTK în timpul statutului de membru junior sau senior conduce la neacordarea statutului de membru alumni. În cazul membrilor GTK care se alătură clubului în ultimul semestru al studiilor de licenţă sau de masterat, acordarea statutului de membru alumni depinde de decizia coordonatorilor GTK.</p>\\n",
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_simple_pages\' => array(),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421229093\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'167\',
        \'source\' => \'node/158\',
        \'alias\' => \'statutul-membrilor\',
        \'language\' => \'ro\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Statutul membrilor\',
        \'mlid\' => 0,
        \'plid\' => \'528\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => TRUE,
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'131\',
      \'uid\' => \'3\',
      \'title\' => \'Asociația Pro Oeconomica\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'6901ea10-9281-41d0-91e4-1a3539a1e6bb\',
      \'nid\' => \'131\',
      \'type\' => \'organizations\',
      \'language\' => \'ro\',
      \'created\' => \'1421227572\',
      \'changed\' => \'1421227572\',
      \'tnid\' => \'129\',
      \'translate\' => \'0\',
      \'uuid\' => \'75225640-0eaa-4d2c-b308-243fe05d444d\',
      \'revision_timestamp\' => \'1421227572\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">A Pro Oeconomica Egyesületet, a kolozsvári Babeş–Bolyai Tu­dományegyetem Közgazdaság- és Gazdálkodástudományi Kar magyar tagozatának háttérszervezetét 2006 áprilisában hozta létre az itt tanító magyar tanárok közössége a következő célokkal: a magyar nyelvű állami közgazdasági képzés fejlesztése és népszerűsítése; szakkönyvek, szakjegyzetek szerkesztése és közlése; a közgazdaságtudományi kutatási tevékenység támogatá­sa; tudományos és szakmai találkozók, konferenciák szerve­zése; a hallgatók szakmai tevékenységének támogatása; olyan – magán vagy állami – szervezetekkel való kapcsolat megteremtése, amely hozzájárulhat a szervezet céljainak megvalósításához.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">A Pro Oeconomica Egyesületet, a kolozsvári Babeş–Bolyai Tu­dományegyetem Közgazdaság- és Gazdálkodástudományi Kar magyar tagozatának háttérszervezetét 2006 áprilisában hozta létre az itt tanító magyar tanárok közössége a következő célokkal: a magyar nyelvű állami közgazdasági képzés fejlesztése és népszerűsítése; szakkönyvek, szakjegyzetek szerkesztése és közlése; a közgazdaságtudományi kutatási tevékenység támogatá­sa; tudományos és szakmai találkozók, konferenciák szerve­zése; a hallgatók szakmai tevékenységének támogatása; olyan – magán vagy állami – szervezetekkel való kapcsolat megteremtése, amely hozzájárulhat a szervezet céljainak megvalósításához.</p>\\n",
          ),
        ),
      ),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.kmei.ro/index.php/rolunk/tagszervezetek\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'59\',
            \'uid\' => \'3\',
            \'filename\' => \'prooeconomicalogo.jpg\',
            \'uri\' => \'public://prooeconomicalogo.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'33035\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421227475\',
            \'type\' => \'image\',
            \'uuid\' => \'4769f518-1c62-4a5f-adf2-beb41519291c\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'812\',
              \'height\' => \'375\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'812\',
            \'height\' => \'375\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421227572\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'140\',
        \'source\' => \'node/131\',
        \'alias\' => \'asociația-pro-oeconomica\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1005\',
      \'uid\' => \'3\',
      \'title\' => \'Autonet\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'157b2bcc-eddd-426a-afd3-674fac256fe6\',
      \'nid\' => \'1005\',
      \'type\' => \'organizations\',
      \'language\' => \'ro\',
      \'created\' => \'1423227969\',
      \'changed\' => \'1423227969\',
      \'tnid\' => \'887\',
      \'translate\' => \'0\',
      \'uuid\' => \'76880059-a3b0-4450-8dc6-7b0fb951aa29\',
      \'revision_timestamp\' => \'1423227969\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Autonet este furnizorul numărul 1 de servicii din domeniul auto pe piaţa românească şi îşi propune să-şi menţină poziţia de lider de piaţă şi de a creşte constant, oferind noi servicii şi soluţii pentru a răspunde cât mai bine nevoilor clienţilor săi.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Autonet este furnizorul numărul 1 de servicii din domeniul auto pe piaţa românească şi îşi propune să-şi menţină poziţia de lider de piaţă şi de a creşte constant, oferind noi servicii şi soluţii pentru a răspunde cât mai bine nevoilor clienţilor săi.</p>\\n",
          ),
        ),
      ),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.autonet-group.ro/despre-autonet/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'625\',
            \'uid\' => \'4\',
            \'filename\' => \'Vectra-Racing.jpg\',
            \'uri\' => \'public://Vectra-Racing_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'7064\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422005926\',
            \'type\' => \'image\',
            \'uuid\' => \'ff7725c3-93ca-46da-89e5-7a238f61a002\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'380\',
              \'height\' => \'185\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'380\',
            \'height\' => \'185\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1423227969\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1016\',
        \'source\' => \'node/1005\',
        \'alias\' => \'autonet\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'155\',
      \'uid\' => \'3\',
      \'title\' => \'Continental Commerce Import & Export SRL\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e4e63da6-77a2-4b00-9440-3b5e623e3c4a\',
      \'nid\' => \'155\',
      \'type\' => \'organizations\',
      \'language\' => \'ro\',
      \'created\' => \'1421228445\',
      \'changed\' => \'1421311288\',
      \'tnid\' => \'153\',
      \'translate\' => \'0\',
      \'uuid\' => \'76912b7d-390c-4cfe-95b3-f29279a0fe4e\',
      \'revision_timestamp\' => \'1421311288\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.importdirect.ro/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'69\',
            \'uid\' => \'3\',
            \'filename\' => \'continentalcommerc.jpg\',
            \'uri\' => \'public://continentalcommerc_1.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'3931\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421228681\',
            \'type\' => \'image\',
            \'uuid\' => \'33a314f9-ab82-41a2-8430-934a58a3282e\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'143\',
              \'height\' => \'94\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'143\',
            \'height\' => \'94\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421228445\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'164\',
        \'source\' => \'node/155\',
        \'alias\' => \'continental-commerce-import-export-srl\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'143\',
      \'uid\' => \'3\',
      \'title\' => \'Marso\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8c7e36f1-75e7-4617-b2a7-e3b3027b8222\',
      \'nid\' => \'143\',
      \'type\' => \'organizations\',
      \'language\' => \'ro\',
      \'created\' => \'1421228154\',
      \'changed\' => \'1421311482\',
      \'tnid\' => \'141\',
      \'translate\' => \'0\',
      \'uuid\' => \'78ed9233-d245-4682-bd0c-a4d38dc3cfe0\',
      \'revision_timestamp\' => \'1421311482\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.marso.ro/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'63\',
            \'uid\' => \'3\',
            \'filename\' => \'marsologo.jpg\',
            \'uri\' => \'public://marsologo.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'47106\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421228135\',
            \'type\' => \'image\',
            \'uuid\' => \'b6a290f6-01de-4560-bbd3-2233ec42295b\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'500\',
              \'height\' => \'99\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'500\',
            \'height\' => \'99\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421228154\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'152\',
        \'source\' => \'node/143\',
        \'alias\' => \'marso\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1280\',
      \'uid\' => \'3\',
      \'title\' => \'Faculty of Economics and Business Administration\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'2f3afad4-52b4-4a7c-a05c-d7057b57967a\',
      \'nid\' => \'1280\',
      \'type\' => \'organizations\',
      \'language\' => \'en\',
      \'created\' => \'1425040544\',
      \'changed\' => \'1425040544\',
      \'tnid\' => \'906\',
      \'translate\' => \'0\',
      \'uuid\' => \'83fd66df-ce0d-4bd2-8972-6087a918fc94\',
      \'revision_timestamp\' => \'1425040544\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">A Babeş-Bolyai Tudományegyetem Közgazdaság- és Gazdálkodástudományi Kara a 2000-2001-es tanévtől kezdődően biztosít magyar nyelvű közgazdász képzést. A szervezetileg is különálló&nbsp;<strong>Közgazdaság- és Gazdálkodástudományi Magyar Intézet</strong>&nbsp;2011 októberében jött létre 21 főállású oktatóval. A magas színvonalú közgazdász képzést helyi és külföldi neves oktatók biztosítják.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Alapképzésen&nbsp;</strong>négy szakirányon kezdhetik meg tanulmányaikat a hallgatók: Gazdasági informatika, Marketing, Menedzsment, valamint Pénzügy és bank. Az érdeklődőknek három magyar nyelvű közgazdasági&nbsp;<strong>mesteri képzés</strong>t biztosítunk: Marketing stratégiák és politikák, Vállalati pénzügyi menedzsment, Vállalkozásmenedzsment. Intézetünk a nappali képzés mellett a hallgatóknak távoktatásos képzést is nyújt.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Az egyetemi kötelező tanterv mellett szakkollégiumi tevékenységek, esettanulmány versenyek, tudományos diákköri konferenciák, szakmai táborok, diákprogramok, meghívott neves hazai és külföldi gyakorló közgadászok és egyetemi oktatók előadásai szinesítik tevékenységeinket. Az elmúlt évtized munkájának eredményeit mutatják diákjaink elméleti és gyakorlati jellegű, hazai és nemzetközi versenyeken elért kimagasló eredményei.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Intézetünk tagjai számos szakterületet lefedő kutatómunkát is folytatnak. Több nemzetközi kutatási projekt tagjaiként eredményeiket tudományos publikációik, nemzetközi konferenciákon tartott előadásaik támasztják alá.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Intézetünk nemzetközi kapcsolatai lehetőséget biztosítanak hallgatóink számára a külföldi közgazdasági egyetemek oktatási programjain való részvételre.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">A Babeş-Bolyai Tudományegyetem Közgazdaság- és Gazdálkodástudományi Kara a 2000-2001-es tanévtől kezdődően biztosít magyar nyelvű közgazdász képzést. A szervezetileg is különálló <strong>Közgazdaság- és Gazdálkodástudományi Magyar Intézet</strong> 2011 októberében jött létre 21 főállású oktatóval. A magas színvonalú közgazdász képzést helyi és külföldi neves oktatók biztosítják.</p>\\n<p class=\\"rtejustify\\"><strong>Alapképzésen </strong>négy szakirányon kezdhetik meg tanulmányaikat a hallgatók: Gazdasági informatika, Marketing, Menedzsment, valamint Pénzügy és bank. Az érdeklődőknek három magyar nyelvű közgazdasági <strong>mesteri képzés</strong>t biztosítunk: Marketing stratégiák és politikák, Vállalati pénzügyi menedzsment, Vállalkozásmenedzsment. Intézetünk a nappali képzés mellett a hallgatóknak távoktatásos képzést is nyújt.</p>\\n<p class=\\"rtejustify\\">Az egyetemi kötelező tanterv mellett szakkollégiumi tevékenységek, esettanulmány versenyek, tudományos diákköri konferenciák, szakmai táborok, diákprogramok, meghívott neves hazai és külföldi gyakorló közgadászok és egyetemi oktatók előadásai szinesítik tevékenységeinket. Az elmúlt évtized munkájának eredményeit mutatják diákjaink elméleti és gyakorlati jellegű, hazai és nemzetközi versenyeken elért kimagasló eredményei.</p>\\n<p class=\\"rtejustify\\">Intézetünk tagjai számos szakterületet lefedő kutatómunkát is folytatnak. Több nemzetközi kutatási projekt tagjaiként eredményeiket tudományos publikációik, nemzetközi konferenciákon tartott előadásaik támasztják alá.</p>\\n<p class=\\"rtejustify\\">Intézetünk nemzetközi kapcsolatai lehetőséget biztosítanak hallgatóink számára a külföldi közgazdasági egyetemek oktatási programjain való részvételre.</p>\\n",
          ),
        ),
      ),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://hu.econ.ubbcluj.ro/intezetunkrol\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'608\',
            \'uid\' => \'4\',
            \'filename\' => \'fsega_0.jpg\',
            \'uri\' => \'public://fsega_0_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'7185\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422004695\',
            \'type\' => \'image\',
            \'uuid\' => \'272db08d-421a-492d-858c-0f220e4f5f82\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'381\',
              \'height\' => \'185\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'381\',
            \'height\' => \'185\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1425040544\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1292\',
        \'source\' => \'node/1280\',
        \'alias\' => \'faculty-economics-and-business-administration-0\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1008\',
      \'uid\' => \'3\',
      \'title\' => \'Communitas Fondation\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f36b1f35-4dbc-4a96-b678-3b88c9aa2415\',
      \'nid\' => \'1008\',
      \'type\' => \'organizations\',
      \'language\' => \'en\',
      \'created\' => \'1423228289\',
      \'changed\' => \'1423228289\',
      \'tnid\' => \'885\',
      \'translate\' => \'0\',
      \'uuid\' => \'840698e0-9858-4e07-8cc9-d19c38412c00\',
      \'revision_timestamp\' => \'1423228289\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.communitas.ro/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'482\',
            \'uid\' => \'3\',
            \'filename\' => \'communitas_15ev_fekvo.png\',
            \'uri\' => \'public://communitas_15ev_fekvo.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'93659\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421758104\',
            \'type\' => \'image\',
            \'uuid\' => \'d35a50db-99dd-4d3a-8472-5e6c693054f3\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'976\',
              \'height\' => \'636\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'976\',
            \'height\' => \'636\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1423228289\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1019\',
        \'source\' => \'node/1008\',
        \'alias\' => \'communitas-fondation\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1282\',
      \'uid\' => \'3\',
      \'title\' => \'East Grain\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'5c1c9a2d-ad59-4f11-9e7e-ea9ee095d092\',
      \'nid\' => \'1282\',
      \'type\' => \'organizations\',
      \'language\' => \'ro\',
      \'created\' => \'1425040600\',
      \'changed\' => \'1425040790\',
      \'tnid\' => \'139\',
      \'translate\' => \'0\',
      \'uuid\' => \'87f77fcd-34c2-4b82-b2eb-d8f38588f4d2\',
      \'revision_timestamp\' => \'1425040790\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Compania East Grain a fost înfiinţată în anul 2007, dată la care își începe activitatea în domeniul comerțului cu cereale, semințe oleaginoase și a plantelor furajere, preponderent pe piața din România și Ungaria. Succesul companiei se bazează pe vasta experiență a acţionarilor și colaboratorilor mai ales în partea Europei Centrale și de Est, în domeniul agriculturii, industriei de prelucrare (morărit, producția de furaje și creșterea animalelor), precum și a comerțului cu plante cerealiere.</p>\\r\\n\\r\\n<blockquote>\\r\\n<p>Cu o continuă ascensiune de la înființare și până în prezent, anul fiscal 2011 a însemnat pentru East Grain vânzări de aproximativ 50.000 de tone de marfă, ceea ce echivalează cu o cifră de afaceri anuală de 10 milioane de euro.</p>\\r\\n</blockquote>\\r\\n\\r\\n<p>În urma experienţelor acumulate în ultimii ani datorită parteneriatelor strategice cu numeroase mori și fabrici de nutreţuri combinate, putem afirma faptul că principalele produse East Grain sunt grâul pentru morărit și porumbul, acestea constituind baza focalizării noastre strategice. În completare, este semnificativ comerțul cu semințe oleaginoase, dar paleta include și alte produse din cultura agricolă (orz, secară, grâu dur) precum și o gamă largă de materii prime furajere (soia, floarea soarelui, rapiță, tărâțe de grâu și porumb, DDGS, etc.)</p>\\r\\n\\r\\n<blockquote>\\r\\n<p>Gândirea și planificarea pe termen lung constituie elementul central al viziunii noastre în afaceri, în mod deosebit în cazul relaţionării cu partenerii. Aceasta viziune ne-a ajutat sa menținem o colaborare sănătoasă cu majoritatea partenerilor noștri de la înființarea companiei încoace.</p>\\r\\n</blockquote>\\r\\n\\r\\n<p>În formarea relațiilor pe termen lung, în afara cunoștiințelor noastre de specialitate considerăm că este deosebit de importantă și soluționarea nevoilor de finanțare și transport ale partenerilor noștri.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Compania East Grain a fost înfiinţată în anul 2007, dată la care își începe activitatea în domeniul comerțului cu cereale, semințe oleaginoase și a plantelor furajere, preponderent pe piața din România și Ungaria. Succesul companiei se bazează pe vasta experiență a acţionarilor și colaboratorilor mai ales în partea Europei Centrale și de Est, în domeniul agriculturii, industriei de prelucrare (morărit, producția de furaje și creșterea animalelor), precum și a comerțului cu plante cerealiere.</p>\\n<blockquote><p>Cu o continuă ascensiune de la înființare și până în prezent, anul fiscal 2011 a însemnat pentru East Grain vânzări de aproximativ 50.000 de tone de marfă, ceea ce echivalează cu o cifră de afaceri anuală de 10 milioane de euro.</p>\\n</blockquote>\\n<p>În urma experienţelor acumulate în ultimii ani datorită parteneriatelor strategice cu numeroase mori și fabrici de nutreţuri combinate, putem afirma faptul că principalele produse East Grain sunt grâul pentru morărit și porumbul, acestea constituind baza focalizării noastre strategice. În completare, este semnificativ comerțul cu semințe oleaginoase, dar paleta include și alte produse din cultura agricolă (orz, secară, grâu dur) precum și o gamă largă de materii prime furajere (soia, floarea soarelui, rapiță, tărâțe de grâu și porumb, DDGS, etc.)</p>\\n<blockquote><p>Gândirea și planificarea pe termen lung constituie elementul central al viziunii noastre în afaceri, în mod deosebit în cazul relaţionării cu partenerii. Aceasta viziune ne-a ajutat sa menținem o colaborare sănătoasă cu majoritatea partenerilor noștri de la înființarea companiei încoace.</p>\\n</blockquote>\\n<p>În formarea relațiilor pe termen lung, în afara cunoștiințelor noastre de specialitate considerăm că este deosebit de importantă și soluționarea nevoilor de finanțare și transport ale partenerilor noștri.</p>\\n",
          ),
        ),
      ),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.eastgrain.ro/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1018\',
            \'uid\' => \'3\',
            \'filename\' => \'eastgrainlogo_0_0.jpg\',
            \'uri\' => \'public://eastgrainlogo_0_0_1.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'5907\',
            \'status\' => \'1\',
            \'timestamp\' => \'1425040790\',
            \'type\' => \'image\',
            \'uuid\' => \'b371f647-1a6a-421e-94a0-69ddf0d25504\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'381\',
              \'height\' => \'185\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'381\',
            \'height\' => \'185\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1425040600\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1294\',
        \'source\' => \'node/1282\',
        \'alias\' => \'east-grain\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'150\',
      \'uid\' => \'3\',
      \'title\' => \'Tipoholding\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4b16373c-4014-44d8-9b90-d097f3ba7c15\',
      \'nid\' => \'150\',
      \'type\' => \'organizations\',
      \'language\' => \'ro\',
      \'created\' => \'1421228348\',
      \'changed\' => \'1421311329\',
      \'tnid\' => \'150\',
      \'translate\' => \'0\',
      \'uuid\' => \'91a05312-bd21-4eef-ba8a-390749fa607b\',
      \'revision_timestamp\' => \'1421311329\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://tipoholding.ro/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'66\',
            \'uid\' => \'3\',
            \'filename\' => \'tipologo.jpg\',
            \'uri\' => \'public://tipologo.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'5956\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421228348\',
            \'type\' => \'image\',
            \'uuid\' => \'79902d8b-f770-4463-8812-5d093e885eb8\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'232\',
              \'height\' => \'79\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'232\',
            \'height\' => \'79\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421228348\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'159\',
        \'source\' => \'node/150\',
        \'alias\' => \'tipoholding\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'154\',
      \'uid\' => \'3\',
      \'title\' => \'Continental Commerce Import & Export SRL\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e2471cbf-dd80-411c-819f-a80f7f3e983e\',
      \'nid\' => \'154\',
      \'type\' => \'organizations\',
      \'language\' => \'hu\',
      \'created\' => \'1421228435\',
      \'changed\' => \'1422004809\',
      \'tnid\' => \'153\',
      \'translate\' => \'0\',
      \'uuid\' => \'9dd141bd-bbb6-4db3-b2bc-7b71c189d445\',
      \'revision_timestamp\' => \'1422004809\',
      \'revision_uid\' => \'4\',
      \'field_body\' => array(),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.importdirect.ro/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'610\',
            \'uid\' => \'4\',
            \'filename\' => \'continentalcommerc_0.jpg\',
            \'uri\' => \'public://continentalcommerc_0_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'6935\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422004809\',
            \'type\' => \'image\',
            \'uuid\' => \'26335eb8-385e-4366-b73f-3cf1b4dbee85\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'380\',
              \'height\' => \'180\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'380\',
            \'height\' => \'180\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421228435\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'163\',
        \'source\' => \'node/154\',
        \'alias\' => \'continental-commerce-import-export-srl\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'152\',
      \'uid\' => \'3\',
      \'title\' => \'Tipoholding\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9e8205ce-e224-4523-ae4e-8f6460e73392\',
      \'nid\' => \'152\',
      \'type\' => \'organizations\',
      \'language\' => \'en\',
      \'created\' => \'1421228379\',
      \'changed\' => \'1421311318\',
      \'tnid\' => \'150\',
      \'translate\' => \'0\',
      \'uuid\' => \'9e54baa4-deca-47d1-91ab-654263ad8204\',
      \'revision_timestamp\' => \'1421311318\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://tipoholding.ro/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'66\',
            \'uid\' => \'3\',
            \'filename\' => \'tipologo.jpg\',
            \'uri\' => \'public://tipologo.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'5956\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421228348\',
            \'type\' => \'image\',
            \'uuid\' => \'79902d8b-f770-4463-8812-5d093e885eb8\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'232\',
              \'height\' => \'79\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'232\',
            \'height\' => \'79\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421228379\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'161\',
        \'source\' => \'node/152\',
        \'alias\' => \'tipoholding\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'134\',
      \'uid\' => \'3\',
      \'title\' => \'Federaţia Universitară Maghiară din Cluj-Napoca\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'3c953469-782d-4d2c-8ebe-d389bb4c6b6f\',
      \'nid\' => \'134\',
      \'type\' => \'organizations\',
      \'language\' => \'ro\',
      \'created\' => \'1421227864\',
      \'changed\' => \'1425041413\',
      \'tnid\' => \'132\',
      \'translate\' => \'0\',
      \'uuid\' => \'a1709da2-1722-47bb-899b-bf3b68ac5561\',
      \'revision_timestamp\' => \'1425041413\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">În data de 20 ianuarie 2004, în urma mai multor tratative s-a înfiinţat Federaţia Universitară Maghiară din Cluj-Napoca (FUMC) ca federaţie a instituţiilor care funcţionează pe lângă anumite specializări din învăţământul universitar de stat în limba maghiară din Cluj-Napoca, adică pe lângă Universitatea Babeş-Bolyai.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">În data de 20 ianuarie 2004, în urma mai multor tratative s-a înfiinţat Federaţia Universitară Maghiară din Cluj-Napoca (FUMC) ca federaţie a instituţiilor care funcţionează pe lângă anumite specializări din învăţământul universitar de stat în limba maghiară din Cluj-Napoca, adică pe lângă Universitatea Babeş-Bolyai.</p>\\n",
          ),
        ),
      ),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.kmei.ro/index.php/ro/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1019\',
            \'uid\' => \'3\',
            \'filename\' => \'kmei_1_0.jpg\',
            \'uri\' => \'public://kmei_1_0_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'5671\',
            \'status\' => \'1\',
            \'timestamp\' => \'1425041413\',
            \'type\' => \'image\',
            \'uuid\' => \'ff80bed6-1e8d-4497-b2d6-17841cd94b2d\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'380\',
              \'height\' => \'185\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'380\',
            \'height\' => \'185\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421227864\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'143\',
        \'source\' => \'node/134\',
        \'alias\' => \'federaţia-universitară-maghiară-din-cluj-napoca\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'156\',
      \'uid\' => \'3\',
      \'title\' => \'Tagsági státuszok\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4cd3dcaf-fad2-4808-8b19-5eb334359e45\',
      \'nid\' => \'156\',
      \'type\' => \'gtk_simple_page\',
      \'language\' => \'hu\',
      \'created\' => \'1421228765\',
      \'changed\' => \'1421229175\',
      \'tnid\' => \'156\',
      \'translate\' => \'0\',
      \'uuid\' => \'a25cd217-dcce-4413-9348-0aac62318f1d\',
      \'revision_timestamp\' => \'1421229175\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">A&nbsp;<strong>GTK</strong>&nbsp;a kolozsvári Babeş-Bolyai Tudományegyetem Közgazdaság- és Gazdálkodástudományi Karának magyar tagozatán érvényes hallgatói jogviszonnyal rendelkező hallgatók által betöltött&nbsp;<strong>junior tagsági</strong>,&nbsp;<strong>szenior tagsági</strong>, valamint az említett jogviszonnyal már nem szükségszerűen rendelkezők által betöltött&nbsp;<strong>alumni tagsági</strong>státuszokkal működik, egyetemi oktatók és gyakorló szakemberek&nbsp;<strong>koordinációja</strong>&nbsp;mellett.</p>\\r\\n\\r\\n<div>\\r\\n<div>\\r\\n<p class=\\"rtejustify\\">A&nbsp;<strong>GTK koordinátorai</strong>&nbsp;döntési jogkörrel rendelkeznek stratégiai-, programalakítási-, szabályzatalakítási-, munkamegosztási-, hatáskörmegosztási-, valamint egyéb előre meg nem határozott kérdésekben, ahol a döntések alapelve minden esetben (sorrend nélkül) az egyetemi presztízs növelése, a&nbsp;GTK céljainak&nbsp;általános teljesülése, a tagok egyéni szakmai fejlődésének támogatása, szabad szakmai mozgásterük kitágítása, valamint ezek természetes összhangjának biztosítása, egyetemi vagy vállalati kötöttségek nélkül.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">A&nbsp;<strong>GTK junior tagság</strong>&nbsp;a koordinátorokból és szenior tagokból álló Felvételi Bizottság által sikeresnek nyilvánított&nbsp;felvételi&nbsp;útján nyerhető el, és legfennebb két féléves időszakra jelenti a&nbsp;GTK alapprogramokban&nbsp;való aktív részvétel lehetőségét. A GTK junior tagsági státuszra a felvételi folyamat során a kolozsvári Babeş-Bolyai Tudományegyetem Közgazdaság- és Gazdálkodástudományi Karának magyar tagozatán érvényes hallgatói jogviszonnyal rendelkező hallgatók pályázhatnak. A GTK egyetemi képzési formától (nappali, távoktatás), tanulmányi szinttől (alapképzés vagy mesteri), tanulmányi évtől és szakiránytól elvonatkoztatva működik, de az éppen aktuális felvételi kiírás szabályozhatja az éppen felvételizők egyetemi tanulmányi szintjét és évét.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">A&nbsp;<strong>GTK</strong>&nbsp;<strong>szenior tagság</strong>&nbsp;legfennebb két féléves időszakra szól és a&nbsp;GTK alapprogramok&nbsp;projektmenedzseri, operatív koordinációs és konzultatív koordinátori feladatokkal bővített feladatkörét jelenti. A szenior tagság elnyerésének feltétele a rendes tagsági státusz időszakában véghezvitt alapprogram sikeres teljesítése (koordinátori megítélés alapján), valamint a szenior tagságra vonatkozó koordinátori felkérés és ennek elfogadása.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Különleges esetben koordinátori javaslatra a junior tagság vagy a szenior tagság összesen legfennebb egy féléves meghosszabbítása lehetséges. A GTK tagsági idő minden esetben a sikeres felvételi félévével együtt, de a legalább egy teljes féléves és ottani vizsgázással is összekötött külföldi tanulmányi ösztöndíjak ideje nélkül értendő.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">A&nbsp;<strong>GTK</strong>&nbsp;<strong>alumni tagság</strong>&nbsp;az alapprogramok junior tagként vagy szenior tagként való sikeres teljesítése után örök tagságot jelent, az alapprogramokban való további részvétel nélkül, a zártkörű rendezvényeken való részvétel jogával (különös tekintettel a GTK évzáró ünnepségein való részvételhez kapcsolódó elvárásra). A junior tagsági és a szenior tagsági státusz mellett a Babeş-Bolyai Tudományegyetemen érvényes hallgatói jogviszony fennállásáig az alumni tagság jogi értelemben is GTK tagságot jelent.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Bármilyen&nbsp;<strong>GTK tagsági státusz megszűnése</strong>&nbsp;történhet adminisztratív összeférhetetlenség, a tag koordinátori értesítéssel egybekötött saját kezdeményezésből, koordinátori kezdeményezésből vagy tag és a koordinátorok közötti közös megegyezés alapján. A rendes tagsági időszak lejárta utáni sikeres teljesítés koordinátori megállapításának elmaradása esetén vagy a junior tagsági státusz idő előtti megszűnése esetén a tag nem jogosult az alumni státuszra. A junior tagsági kihívások maximálisan rendelkezésre álló idő alatti sikeres teljesítése és az alumni tagsági státuszra való jogosultság megítélése az alapképzésük, valamint a mesteri képzésük utolsó félévében felvételizettek további adminisztratív összeférhetetlensége esetén külön koordinátori elbírálás alá esik.</p>\\r\\n</div>\\r\\n</div>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">A <strong>GTK</strong> a kolozsvári Babeş-Bolyai Tudományegyetem Közgazdaság- és Gazdálkodástudományi Karának magyar tagozatán érvényes hallgatói jogviszonnyal rendelkező hallgatók által betöltött <strong>junior tagsági</strong>, <strong>szenior tagsági</strong>, valamint az említett jogviszonnyal már nem szükségszerűen rendelkezők által betöltött <strong>alumni tagsági</strong>státuszokkal működik, egyetemi oktatók és gyakorló szakemberek <strong>koordinációja</strong> mellett.</p>\\n<p class=\\"rtejustify\\">A <strong>GTK koordinátorai</strong> döntési jogkörrel rendelkeznek stratégiai-, programalakítási-, szabályzatalakítási-, munkamegosztási-, hatáskörmegosztási-, valamint egyéb előre meg nem határozott kérdésekben, ahol a döntések alapelve minden esetben (sorrend nélkül) az egyetemi presztízs növelése, a GTK céljainak általános teljesülése, a tagok egyéni szakmai fejlődésének támogatása, szabad szakmai mozgásterük kitágítása, valamint ezek természetes összhangjának biztosítása, egyetemi vagy vállalati kötöttségek nélkül.</p>\\n<p class=\\"rtejustify\\">A <strong>GTK junior tagság</strong> a koordinátorokból és szenior tagokból álló Felvételi Bizottság által sikeresnek nyilvánított felvételi útján nyerhető el, és legfennebb két féléves időszakra jelenti a GTK alapprogramokban való aktív részvétel lehetőségét. A GTK junior tagsági státuszra a felvételi folyamat során a kolozsvári Babeş-Bolyai Tudományegyetem Közgazdaság- és Gazdálkodástudományi Karának magyar tagozatán érvényes hallgatói jogviszonnyal rendelkező hallgatók pályázhatnak. A GTK egyetemi képzési formától (nappali, távoktatás), tanulmányi szinttől (alapképzés vagy mesteri), tanulmányi évtől és szakiránytól elvonatkoztatva működik, de az éppen aktuális felvételi kiírás szabályozhatja az éppen felvételizők egyetemi tanulmányi szintjét és évét.</p>\\n<p class=\\"rtejustify\\">A <strong>GTK</strong> <strong>szenior tagság</strong> legfennebb két féléves időszakra szól és a GTK alapprogramok projektmenedzseri, operatív koordinációs és konzultatív koordinátori feladatokkal bővített feladatkörét jelenti. A szenior tagság elnyerésének feltétele a rendes tagsági státusz időszakában véghezvitt alapprogram sikeres teljesítése (koordinátori megítélés alapján), valamint a szenior tagságra vonatkozó koordinátori felkérés és ennek elfogadása.</p>\\n<p class=\\"rtejustify\\">Különleges esetben koordinátori javaslatra a junior tagság vagy a szenior tagság összesen legfennebb egy féléves meghosszabbítása lehetséges. A GTK tagsági idő minden esetben a sikeres felvételi félévével együtt, de a legalább egy teljes féléves és ottani vizsgázással is összekötött külföldi tanulmányi ösztöndíjak ideje nélkül értendő.</p>\\n<p class=\\"rtejustify\\">A <strong>GTK</strong> <strong>alumni tagság</strong> az alapprogramok junior tagként vagy szenior tagként való sikeres teljesítése után örök tagságot jelent, az alapprogramokban való további részvétel nélkül, a zártkörű rendezvényeken való részvétel jogával (különös tekintettel a GTK évzáró ünnepségein való részvételhez kapcsolódó elvárásra). A junior tagsági és a szenior tagsági státusz mellett a Babeş-Bolyai Tudományegyetemen érvényes hallgatói jogviszony fennállásáig az alumni tagság jogi értelemben is GTK tagságot jelent.</p>\\n<p class=\\"rtejustify\\">Bármilyen <strong>GTK tagsági státusz megszűnése</strong> történhet adminisztratív összeférhetetlenség, a tag koordinátori értesítéssel egybekötött saját kezdeményezésből, koordinátori kezdeményezésből vagy tag és a koordinátorok közötti közös megegyezés alapján. A rendes tagsági időszak lejárta utáni sikeres teljesítés koordinátori megállapításának elmaradása esetén vagy a junior tagsági státusz idő előtti megszűnése esetén a tag nem jogosult az alumni státuszra. A junior tagsági kihívások maximálisan rendelkezésre álló idő alatti sikeres teljesítése és az alumni tagsági státuszra való jogosultság megítélése az alapképzésük, valamint a mesteri képzésük utolsó félévében felvételizettek további adminisztratív összeférhetetlensége esetén külön koordinátori elbírálás alá esik.</p>\\n",
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_simple_pages\' => array(),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421228765\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'165\',
        \'source\' => \'node/156\',
        \'alias\' => \'tagsági-státuszok\',
        \'language\' => \'hu\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Tagsági státuszok\',
        \'mlid\' => 0,
        \'plid\' => \'505\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-50\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'161\',
      \'uid\' => \'3\',
      \'title\' => \'Legyen támogatónk!\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'7b72e3ab-d517-4347-be5f-7532497a7a57\',
      \'nid\' => \'161\',
      \'type\' => \'gtk_simple_page\',
      \'language\' => \'ro\',
      \'created\' => \'1421229367\',
      \'changed\' => \'1421229367\',
      \'tnid\' => \'159\',
      \'translate\' => \'0\',
      \'uuid\' => \'a3e4ca80-41ce-4e40-a771-957d43bc5a5f\',
      \'revision_timestamp\' => \'1421229367\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">A Gazdasági Tanácsadó Klub kimondott célja, hogy az egyetemi képzésben résztvevő hallgatók számára egy olyan gyakorlati jellegű szakmai többletet és tapasztalatot nyújtson, amely segítségével tagjaink, az egyetemi képzés elvégzése után, nagyobb sikerrel válhatnak gyakorló, vállalati szakemberekké, vállalkozókká vagy menedzserekké. Ahhoz azonban, hogy jól képzett és a gyakorlati szférában a helyüket megálló pályakezdőket képezzünk, szükségünk van a vállalati és akadémiai szférával való együttműködésre és az Önök támogatásra.</p>\\r\\n\\r\\n<div>\\r\\n<div>\\r\\n<p class=\\"rtejustify\\">Amennyiben Ön, mint magánszemély vagy jogi személyi képviselő, képzésünkhöz személyi jövedelemadója 2%-ának felajánlásával vagy más anyagi jellegű támogatással hozzá szeretne járulni, ezt tisztelettel és lehetőségeink szerint nyilvános köszönetnyilvánítással fogadjuk.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Amennyiben Ön, mint vállalati döntéshozó, gyakorló szakember vagy a reál szférában jelentős gyakorlati tapasztalattal rendelkező egyetemi oktató, fontosnak tartja, hogy a megfelelő színvonalú és gyakorlatias „utánpótlásképzést” tudásával, tapasztalatai megosztásával támogassa, akkor szívesen fogadjuk a támogatását (az alábbiak közül bármilyen formában):</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li class=\\"rtejustify\\">Üzleti témájú előadás megtartása hallgatóink számára,</li>\\r\\n\\t<li class=\\"rtejustify\\">Menedzsment shadowing lehetőségek biztosítása,</li>\\r\\n\\t<li class=\\"rtejustify\\">Más, a céljainknak megfelelő együttműködési lehetőségek felajánlása.</li>\\r\\n</ul>\\r\\n\\r\\n<p class=\\"rtejustify\\">Támogatási szándékát kérjük, jelezze az&nbsp;<a href=\\"http://us.mc448.mail.yahoo.com/mc/compose?to=office@gtk.ro\\" target=\\"_blank\\">office@gtk.ro</a>&nbsp;e-mail címen vagy üzenet küldésével a&nbsp;<a href=\\"http://gtk.ro/kapcsolat\\" target=\\"_blank\\">Kapcsolat</a>&nbsp;menüpont alatt.</p>\\r\\n</div>\\r\\n</div>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">A Gazdasági Tanácsadó Klub kimondott célja, hogy az egyetemi képzésben résztvevő hallgatók számára egy olyan gyakorlati jellegű szakmai többletet és tapasztalatot nyújtson, amely segítségével tagjaink, az egyetemi képzés elvégzése után, nagyobb sikerrel válhatnak gyakorló, vállalati szakemberekké, vállalkozókká vagy menedzserekké. Ahhoz azonban, hogy jól képzett és a gyakorlati szférában a helyüket megálló pályakezdőket képezzünk, szükségünk van a vállalati és akadémiai szférával való együttműködésre és az Önök támogatásra.</p>\\n<p class=\\"rtejustify\\">Amennyiben Ön, mint magánszemély vagy jogi személyi képviselő, képzésünkhöz személyi jövedelemadója 2%-ának felajánlásával vagy más anyagi jellegű támogatással hozzá szeretne járulni, ezt tisztelettel és lehetőségeink szerint nyilvános köszönetnyilvánítással fogadjuk.</p>\\n<p class=\\"rtejustify\\">Amennyiben Ön, mint vállalati döntéshozó, gyakorló szakember vagy a reál szférában jelentős gyakorlati tapasztalattal rendelkező egyetemi oktató, fontosnak tartja, hogy a megfelelő színvonalú és gyakorlatias „utánpótlásképzést” tudásával, tapasztalatai megosztásával támogassa, akkor szívesen fogadjuk a támogatását (az alábbiak közül bármilyen formában):</p>\\n<ul><li class=\\"rtejustify\\">Üzleti témájú előadás megtartása hallgatóink számára,</li>\\n<li class=\\"rtejustify\\">Menedzsment shadowing lehetőségek biztosítása,</li>\\n<li class=\\"rtejustify\\">Más, a céljainknak megfelelő együttműködési lehetőségek felajánlása.</li>\\n</ul><p class=\\"rtejustify\\">Támogatási szándékát kérjük, jelezze az <a href=\\"http://us.mc448.mail.yahoo.com/mc/compose?to=office@gtk.ro\\" target=\\"_blank\\">office@gtk.ro</a> e-mail címen vagy üzenet küldésével a <a href=\\"http://gtk.ro/kapcsolat\\" target=\\"_blank\\">Kapcsolat</a> menüpont alatt.</p>\\n",
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_simple_pages\' => array(),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421229367\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'170\',
        \'source\' => \'node/161\',
        \'alias\' => \'legyen-támogatónk\',
        \'language\' => \'ro\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Support Us! (ro)\',
        \'mlid\' => 0,
        \'plid\' => \'535\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'2\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => TRUE,
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'147\',
      \'uid\' => \'3\',
      \'title\' => \'Romespa\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'037d0d80-a73b-4fce-a410-3ccfb03356f9\',
      \'nid\' => \'147\',
      \'type\' => \'organizations\',
      \'language\' => \'en\',
      \'created\' => \'1421228273\',
      \'changed\' => \'1421311362\',
      \'tnid\' => \'147\',
      \'translate\' => \'0\',
      \'uuid\' => \'a57bfea0-f251-4b23-8a69-5ff6267de928\',
      \'revision_timestamp\' => \'1421311362\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'65\',
            \'uid\' => \'3\',
            \'filename\' => \'romespalogo.jpg\',
            \'uri\' => \'public://romespalogo.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'30942\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421228273\',
            \'type\' => \'image\',
            \'uuid\' => \'0fa0c535-7299-4a44-b0db-edc5acf58528\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'1202\',
              \'height\' => \'274\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1202\',
            \'height\' => \'274\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421228273\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'156\',
        \'source\' => \'node/147\',
        \'alias\' => \'romespa\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'153\',
      \'uid\' => \'3\',
      \'title\' => \'Continental Commerce Import & Export SRL\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b48375db-0366-4306-a623-eac40e5d8229\',
      \'nid\' => \'153\',
      \'type\' => \'organizations\',
      \'language\' => \'en\',
      \'created\' => \'1421228425\',
      \'changed\' => \'1421311276\',
      \'tnid\' => \'153\',
      \'translate\' => \'0\',
      \'uuid\' => \'aa2dc297-3e5f-417f-8c46-e08fc3913f50\',
      \'revision_timestamp\' => \'1421311276\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.importdirect.ro/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'67\',
            \'uid\' => \'3\',
            \'filename\' => \'continentalcommerc.jpg\',
            \'uri\' => \'public://continentalcommerc.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'3931\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421228647\',
            \'type\' => \'image\',
            \'uuid\' => \'d7a75c0b-0758-4f7d-a9a5-4798e9b84246\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'143\',
              \'height\' => \'94\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'143\',
            \'height\' => \'94\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421228425\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'162\',
        \'source\' => \'node/153\',
        \'alias\' => \'continental-commerce-import-export-srl\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'122\',
      \'uid\' => \'3\',
      \'title\' => \'Felvételi\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'dd5d3b93-c16f-4c63-ba91-c8db7db6b040\',
      \'nid\' => \'122\',
      \'type\' => \'gtk_simple_page\',
      \'language\' => \'ro\',
      \'created\' => \'1421226622\',
      \'changed\' => \'1421226622\',
      \'tnid\' => \'120\',
      \'translate\' => \'0\',
      \'uuid\' => \'ad46aa7c-85ff-4213-9892-097d8fc0cad7\',
      \'revision_timestamp\' => \'1421226622\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\"><strong>2014. októberében újra megnyitjuk az őszi felvételi folyamatot! Részletek lennebb...</strong></p>\\r\\n\\r\\n<div>\\r\\n<div>\\r\\n<p class=\\"rtejustify\\">&nbsp;</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">A kolozsvári Babeş-Bolyai Tudományegyetem Közgazdaság- és Gazdálkodástudományi Karának magyar tagozatos hallgatói körében 2008 óta minden évben újra meghirdetésre kerül a Gazdasági Tanácsadó Klubba való felvétel, két formában:</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li class=\\"rtejustify\\"><u><strong>Általános felvételi:</strong></u>&nbsp;minden év&nbsp;<strong>október/novemberében MINDEN</strong>&nbsp;kolozsvári BBTE KGTK magyar tagozatos hallgató pályázhat. Az általános felvételin felvételt nyert új tagok azonnal bekapcsolódnak minden GTK alapprogramba.</li>\\r\\n\\t<li class=\\"rtejustify\\"><u><strong>Kiegészítő felvételi:</strong></u><strong>&nbsp;</strong>minden év&nbsp;<strong>április/májusában</strong>&nbsp;minden olyan kolozsvári BBTE KGTK magyar tagozatos hallgató pályázhat, aki nem végzős mesteris, és az utolsó október/novemberi általános felvételi&nbsp;<strong>óta eltelt időszakban nemzetközi vagy helyi esettanulmány versenyen díjazott volt (beleértve dicséretet és különdíjat), vagy pedig hivatalosan dokumentálható okokból</strong>&nbsp;nem vehetett részt a legutóbbi általános felvételin. A hivatalosan dokumentálható okot a motivációs levélben, az esetverseny eredményt a CV-ben kérjük (esetenként) feltüntetni. A kiegészítő felvételi során bejutott új tagok csak a következő tanév kezdetekor (október) kapcsolódnak be minden GTK alapprogramba (féléves csoportos projekt, menedzsment shadowing), addig csak a GTK rendezvényeken való részvétel elvárt.</li>\\r\\n</ul>\\r\\n\\r\\n<p class=\\"rtejustify\\">&nbsp;</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong><u>A 2014. októberi felvételin való részvétel aktuális feltételei</u></strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">A 2014. év&nbsp;októberében rendezett felvételi&nbsp;<strong>általános felvételi.&nbsp;</strong>A maximálisan felvehető tagok száma:&nbsp;<strong>10 fő</strong>.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Standard Felvételi Eljárás</strong></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><em>1. lépés – Önéletrajz, motivációs levél (pályázók)</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Fényképes önéletrajz és motivációs levél elküldése, elektronikusan,&nbsp;<u>2014. október 17. (péntek), 21:00 óráig</u>&nbsp;az&nbsp;<a href=\\"mailto:office@gtk.ro\\">office@gtk.ro</a>&nbsp;címre.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><em>2. lépés – esettanulmány (pályázók)</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">A jelentkező személyek legkésőbb&nbsp;<u>2014. október 17., 22:00 óráig</u>&nbsp;kapnak egy olyan esettanulmányt, amely megoldására irányuló, legfennebb 1 oldalas egyéni javaslataikat&nbsp;<u>2014. október 19. (vasárnap), 23:00 óráig</u><u>,</u>&nbsp;kell elküldeni az&nbsp;<a href=\\"mailto:office@gtk.ro\\">office@gtk.ro</a>&nbsp;címre.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><em>3. lépés – interjú (jelöltekké vált pályázók)</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Azok a pályázók, akik a koordinátorokból, külső szakemberekből és szenior tagokból álló Felvételi Bizottságtól (a beérkezett 3 dokumentum alapján: CV, motivációs levél, eset megoldás)&nbsp;<u>2014. október 20. (hétfő)</u><u>, 18:00 óráig</u>&nbsp;kapott visszajelzésük egy&nbsp;<u>2014. október 21-én, kedden</u>&nbsp;tartandó interjúra való meghívást is tartalmaz, azok a visszajelzéssel együtt közölt időpontban és helyszínen kell megjelenjenek a felvételi eljárás 3. lépésére, az interjúra.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><em>4. lépés – eredményhirdetés (jelöltek) és tevékenység indítása (új és régi tagok).</em></p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Sok siker kívánunk minden jelentkezőnek!&nbsp;<br />\\r\\nA Felvételi Bizottság</strong></p>\\r\\n</div>\\r\\n</div>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\"><strong>2014. októberében újra megnyitjuk az őszi felvételi folyamatot! Részletek lennebb...</strong></p>\\n<p class=\\"rtejustify\\"> </p>\\n<p class=\\"rtejustify\\">A kolozsvári Babeş-Bolyai Tudományegyetem Közgazdaság- és Gazdálkodástudományi Karának magyar tagozatos hallgatói körében 2008 óta minden évben újra meghirdetésre kerül a Gazdasági Tanácsadó Klubba való felvétel, két formában:</p>\\n<ul><li class=\\"rtejustify\\"><u><strong>Általános felvételi:</strong></u> minden év <strong>október/novemberében MINDEN</strong> kolozsvári BBTE KGTK magyar tagozatos hallgató pályázhat. Az általános felvételin felvételt nyert új tagok azonnal bekapcsolódnak minden GTK alapprogramba.</li>\\n<li class=\\"rtejustify\\"><u><strong>Kiegészítő felvételi:</strong></u><strong> </strong>minden év <strong>április/májusában</strong> minden olyan kolozsvári BBTE KGTK magyar tagozatos hallgató pályázhat, aki nem végzős mesteris, és az utolsó október/novemberi általános felvételi <strong>óta eltelt időszakban nemzetközi vagy helyi esettanulmány versenyen díjazott volt (beleértve dicséretet és különdíjat), vagy pedig hivatalosan dokumentálható okokból</strong> nem vehetett részt a legutóbbi általános felvételin. A hivatalosan dokumentálható okot a motivációs levélben, az esetverseny eredményt a CV-ben kérjük (esetenként) feltüntetni. A kiegészítő felvételi során bejutott új tagok csak a következő tanév kezdetekor (október) kapcsolódnak be minden GTK alapprogramba (féléves csoportos projekt, menedzsment shadowing), addig csak a GTK rendezvényeken való részvétel elvárt.</li>\\n</ul><p class=\\"rtejustify\\"> </p>\\n<p class=\\"rtejustify\\"><strong><u>A 2014. októberi felvételin való részvétel aktuális feltételei</u></strong></p>\\n<p class=\\"rtejustify\\">A 2014. év októberében rendezett felvételi <strong>általános felvételi. </strong>A maximálisan felvehető tagok száma: <strong>10 fő</strong>.</p>\\n<p class=\\"rtejustify\\"><strong>Standard Felvételi Eljárás</strong></p>\\n<p class=\\"rtejustify\\"><em>1. lépés – Önéletrajz, motivációs levél (pályázók)</em></p>\\n<p class=\\"rtejustify\\">Fényképes önéletrajz és motivációs levél elküldése, elektronikusan, <u>2014. október 17. (péntek), 21:00 óráig</u> az <a href=\\"mailto:office@gtk.ro\\">office@gtk.ro</a> címre.</p>\\n<p class=\\"rtejustify\\"><em>2. lépés – esettanulmány (pályázók)</em></p>\\n<p class=\\"rtejustify\\">A jelentkező személyek legkésőbb <u>2014. október 17., 22:00 óráig</u> kapnak egy olyan esettanulmányt, amely megoldására irányuló, legfennebb 1 oldalas egyéni javaslataikat <u>2014. október 19. (vasárnap), 23:00 óráig</u><u>,</u> kell elküldeni az <a href=\\"mailto:office@gtk.ro\\">office@gtk.ro</a> címre.</p>\\n<p class=\\"rtejustify\\"><em>3. lépés – interjú (jelöltekké vált pályázók)</em></p>\\n<p class=\\"rtejustify\\">Azok a pályázók, akik a koordinátorokból, külső szakemberekből és szenior tagokból álló Felvételi Bizottságtól (a beérkezett 3 dokumentum alapján: CV, motivációs levél, eset megoldás) <u>2014. október 20. (hétfő)</u><u>, 18:00 óráig</u> kapott visszajelzésük egy <u>2014. október 21-én, kedden</u> tartandó interjúra való meghívást is tartalmaz, azok a visszajelzéssel együtt közölt időpontban és helyszínen kell megjelenjenek a felvételi eljárás 3. lépésére, az interjúra.</p>\\n<p class=\\"rtejustify\\"><em>4. lépés – eredményhirdetés (jelöltek) és tevékenység indítása (új és régi tagok).</em></p>\\n<p class=\\"rtejustify\\"><strong>Sok siker kívánunk minden jelentkezőnek! <br />\\nA Felvételi Bizottság</strong></p>\\n",
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_simple_pages\' => array(),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421226622\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'131\',
        \'source\' => \'node/122\',
        \'alias\' => \'felvételi\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'887\',
      \'uid\' => \'3\',
      \'title\' => \'Autonet\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'90b2a75c-23b2-4a08-9123-e35332090a64\',
      \'nid\' => \'887\',
      \'type\' => \'organizations\',
      \'language\' => \'hu\',
      \'created\' => \'1421758296\',
      \'changed\' => \'1422005926\',
      \'tnid\' => \'887\',
      \'translate\' => \'0\',
      \'uuid\' => \'aec9bc86-fa66-4491-9313-103edb7fdbca\',
      \'revision_timestamp\' => \'1422005926\',
      \'revision_uid\' => \'4\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Az&nbsp;<strong>Autonet Csoport</strong>&nbsp;a régió egyik legjelentősebb autó- és javítóipari szolgáltató csoportosulása, megoldásokat kínálva az autó- és javítóipar igényeire.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Az<strong>&nbsp;AUTONET Import Magyarország Kft.</strong>&nbsp;és az&nbsp;<strong>Autonet Import SRL</strong>Magyarországon és Romániában az autó- és javítóipari partnerek munkáját egy átfogó termék- és szolgáltatás portfólióval segíti.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">A&nbsp;<strong>Lubexpert</strong>&nbsp;kenőanyag importőr és értékesítő cég, a&nbsp;<strong>Forsius</strong>&nbsp;a fényező műhelyek beszállítója, festékek, kiegészítők, speciális műhelyfelszerelések szállítója.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">A&nbsp;<strong>Consult Scolari Egyesület</strong>&nbsp;az Autonet partnere az autóműszaki felnőttképzés meg más képzések biztosításában az alkalmazottak és partnerek számára.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">A&nbsp;<strong>Partslife</strong>&nbsp;az autó- és javítóipar által előállított hulladékok kezelésére, újrahasznosítására hoz megoldásokat.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Az<strong>&nbsp;ATR</strong>&nbsp;gyakorlatilag az európai független autóalkatrész importőrök és értékesítők érdekvédelmi szervezete, napjainkban 50 ország 215 legnagyobb cége képviselteti magát a szervezetben.<br />\\r\\nE tagság pozitív hatással bír Partnereinkre is, hiszen hathatós segítséget nyújt a beszerzési folyamatban, információkat szolgáltat és koncepciókat biztosít.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Az elmúlt években az Autonet Cégcsoport érte el a legnagyobb növekedést az ATR-en belül, ezáltal is hozzájárulva az érdekképviseleti szövetség sikereihez, eredményeihez.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Az <strong>Autonet Csoport</strong> a régió egyik legjelentősebb autó- és javítóipari szolgáltató csoportosulása, megoldásokat kínálva az autó- és javítóipar igényeire.</p>\\n<p class=\\"rtejustify\\">Az<strong> AUTONET Import Magyarország Kft.</strong> és az <strong>Autonet Import SRL</strong>Magyarországon és Romániában az autó- és javítóipari partnerek munkáját egy átfogó termék- és szolgáltatás portfólióval segíti.</p>\\n<p class=\\"rtejustify\\">A <strong>Lubexpert</strong> kenőanyag importőr és értékesítő cég, a <strong>Forsius</strong> a fényező műhelyek beszállítója, festékek, kiegészítők, speciális műhelyfelszerelések szállítója.</p>\\n<p class=\\"rtejustify\\">A <strong>Consult Scolari Egyesület</strong> az Autonet partnere az autóműszaki felnőttképzés meg más képzések biztosításában az alkalmazottak és partnerek számára.</p>\\n<p class=\\"rtejustify\\">A <strong>Partslife</strong> az autó- és javítóipar által előállított hulladékok kezelésére, újrahasznosítására hoz megoldásokat.</p>\\n<p class=\\"rtejustify\\">Az<strong> ATR</strong> gyakorlatilag az európai független autóalkatrész importőrök és értékesítők érdekvédelmi szervezete, napjainkban 50 ország 215 legnagyobb cége képviselteti magát a szervezetben.<br />\\nE tagság pozitív hatással bír Partnereinkre is, hiszen hathatós segítséget nyújt a beszerzési folyamatban, információkat szolgáltat és koncepciókat biztosít.</p>\\n<p class=\\"rtejustify\\">Az elmúlt években az Autonet Cégcsoport érte el a legnagyobb növekedést az ATR-en belül, ezáltal is hozzájárulva az érdekképviseleti szövetség sikereihez, eredményeihez.</p>\\n",
          ),
        ),
      ),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.autonet-group.ro/hu/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'625\',
            \'uid\' => \'4\',
            \'filename\' => \'Vectra-Racing.jpg\',
            \'uri\' => \'public://Vectra-Racing_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'7064\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422005926\',
            \'type\' => \'image\',
            \'uuid\' => \'ff7725c3-93ca-46da-89e5-7a238f61a002\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'380\',
              \'height\' => \'185\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'380\',
            \'height\' => \'185\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421758296\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'898\',
        \'source\' => \'node/887\',
        \'alias\' => \'autonet\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'157\',
      \'uid\' => \'3\',
      \'title\' => \'Membership statuses\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'052f6700-9327-4712-b802-fc4f82ff1af8\',
      \'nid\' => \'157\',
      \'type\' => \'gtk_simple_page\',
      \'language\' => \'en\',
      \'created\' => \'1421228927\',
      \'changed\' => \'1421229121\',
      \'tnid\' => \'156\',
      \'translate\' => \'0\',
      \'uuid\' => \'b6e5b6e0-4d8b-4929-868c-b267f62a4416\',
      \'revision_timestamp\' => \'1421229121\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">The GTK - Business Consulting Club&nbsp;consists of&nbsp;<strong>junior members</strong>,&nbsp;<strong>senior members</strong>&nbsp;(students with valid student status at the Babeş-Bolyai University, Cluj-Napoca, Hungarian Department of Economics and Business Administration), and&nbsp;<strong>alumni members</strong>&nbsp;(former junior or senior members), under the&nbsp;<strong>coordination&nbsp;</strong>of university professors and business professionals.</p>\\r\\n\\r\\n<div>\\r\\n<div>\\r\\n<p class=\\"rtejustify\\">GTK<strong> coordinators&nbsp;</strong>make decisions regarding the strategic direction, program development, and regulatory and operational issues of the GTK. The underlying principles of decision making are the following: increasing the reputation of the university, fulfillment of the objectives of the GTK, supporting the individual professional development of members, enlarging the professional opportunities for our members, and the harmonization of these objectives, without specific obligations toward the university and companies.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Junior members&nbsp;</strong>can join the GTK after a successful admission exam and interview in front of GTK coordinators and senior members. Junior membership lasts for two semesters and gives the right to participate in all the activities of the GTK. All students of the Babeş-Bolyai University in Cluj-Napoca, Romania, Faculty of Economics and Business Administration, Hungarian Department of Economics and Business Administration can apply for junior membership, irrespective of the university year or study program followed.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Senior membership</strong>&nbsp;consists of an increased scope of duties, including project management, coordination of and consulting with junior members during GTK activities. Senior membership lasts for two semesters and can be obtained after the successful fulfillment of GTK programs under junior membership status, and is adjudicated by&nbsp;GTK coordinators.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\"><strong>Alumni membership</strong>&nbsp;is obtained after the successful fulfillment of GTK programs under junior or senior membership status, and represents eternal GTK membership. Alumni members are not participating actively in GTK programs, but may attend all events organized by the GTK.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Termination of GTK membership status takes place in cases of administrative incompatibility, the expressed will of the member, decision of the coordinators, or mutual agreement. In case of inappropriate fulfillment of GTK junior programs or the termination before due date of junior or senior membership statuses does not entitle the member for alumni membership status. In case a member is joining the GTK in the last semester of his/her studies, the alumni membership status is subject to coordinators’ decision.</p>\\r\\n</div>\\r\\n</div>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">The GTK - Business Consulting Club consists of <strong>junior members</strong>, <strong>senior members</strong> (students with valid student status at the Babeş-Bolyai University, Cluj-Napoca, Hungarian Department of Economics and Business Administration), and <strong>alumni members</strong> (former junior or senior members), under the <strong>coordination </strong>of university professors and business professionals.</p>\\n<p class=\\"rtejustify\\">GTK<strong> coordinators </strong>make decisions regarding the strategic direction, program development, and regulatory and operational issues of the GTK. The underlying principles of decision making are the following: increasing the reputation of the university, fulfillment of the objectives of the GTK, supporting the individual professional development of members, enlarging the professional opportunities for our members, and the harmonization of these objectives, without specific obligations toward the university and companies.</p>\\n<p class=\\"rtejustify\\"><strong>Junior members </strong>can join the GTK after a successful admission exam and interview in front of GTK coordinators and senior members. Junior membership lasts for two semesters and gives the right to participate in all the activities of the GTK. All students of the Babeş-Bolyai University in Cluj-Napoca, Romania, Faculty of Economics and Business Administration, Hungarian Department of Economics and Business Administration can apply for junior membership, irrespective of the university year or study program followed.</p>\\n<p class=\\"rtejustify\\"><strong>Senior membership</strong> consists of an increased scope of duties, including project management, coordination of and consulting with junior members during GTK activities. Senior membership lasts for two semesters and can be obtained after the successful fulfillment of GTK programs under junior membership status, and is adjudicated by GTK coordinators.</p>\\n<p class=\\"rtejustify\\"><strong>Alumni membership</strong> is obtained after the successful fulfillment of GTK programs under junior or senior membership status, and represents eternal GTK membership. Alumni members are not participating actively in GTK programs, but may attend all events organized by the GTK.</p>\\n<p class=\\"rtejustify\\">Termination of GTK membership status takes place in cases of administrative incompatibility, the expressed will of the member, decision of the coordinators, or mutual agreement. In case of inappropriate fulfillment of GTK junior programs or the termination before due date of junior or senior membership statuses does not entitle the member for alumni membership status. In case a member is joining the GTK in the last semester of his/her studies, the alumni membership status is subject to coordinators’ decision.</p>\\n",
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_simple_pages\' => array(),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421228927\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'166\',
        \'source\' => \'node/157\',
        \'alias\' => \'membership-statuses\',
        \'language\' => \'en\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Membership Statuses\',
        \'mlid\' => 0,
        \'plid\' => \'482\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => TRUE,
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'144\',
      \'uid\' => \'3\',
      \'title\' => \'Romchemicals\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'6600e228-dbe3-4048-833a-9b18cd98b3fc\',
      \'nid\' => \'144\',
      \'type\' => \'organizations\',
      \'language\' => \'ro\',
      \'created\' => \'1421228201\',
      \'changed\' => \'1421311449\',
      \'tnid\' => \'144\',
      \'translate\' => \'0\',
      \'uuid\' => \'b918b067-648e-47bd-a075-d42d82dc4331\',
      \'revision_timestamp\' => \'1421311449\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.hungarochemicals.hu/rom/index.php\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'64\',
            \'uid\' => \'3\',
            \'filename\' => \'romchemicalslogo.jpg\',
            \'uri\' => \'public://romchemicalslogo.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'36727\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421228201\',
            \'type\' => \'image\',
            \'uuid\' => \'5e40fee3-20d9-4203-97b7-319a373d7a08\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'1002\',
              \'height\' => \'258\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1002\',
            \'height\' => \'258\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421228201\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'153\',
        \'source\' => \'node/144\',
        \'alias\' => \'romchemicals\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'132\',
      \'uid\' => \'3\',
      \'title\' => \'Kolozsvári Magyar Egyetemi Intézet\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'2b76da5a-ca7f-4386-bb07-82fa59e999f1\',
      \'nid\' => \'132\',
      \'type\' => \'organizations\',
      \'language\' => \'hu\',
      \'created\' => \'1421227726\',
      \'changed\' => \'1422005581\',
      \'tnid\' => \'132\',
      \'translate\' => \'0\',
      \'uuid\' => \'c1370b11-520d-4d48-9f62-224a545eb334\',
      \'revision_timestamp\' => \'1422005581\',
      \'revision_uid\' => \'4\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">A kolozsvári állami magyar nyelvű felsőoktatás, jelesen a Babeş-Bolyai Tudományegyetem magyar tagozatának egyes szakjai mellett működő háttérintézmények szövetségeként 2004. január 20-án megalakult a&nbsp;<em><strong>Kolozsvári Magyar Egyetemi Intézet</strong></em>&nbsp;(KMEI).</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">A kolozsvári állami magyar nyelvű felsőoktatás, jelesen a Babeş-Bolyai Tudományegyetem magyar tagozatának egyes szakjai mellett működő háttérintézmények szövetségeként 2004. január 20-án megalakult a <em><strong>Kolozsvári Magyar Egyetemi Intézet</strong></em> (KMEI).</p>\\n",
          ),
        ),
      ),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.kmei.ro/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'621\',
            \'uid\' => \'4\',
            \'filename\' => \'kmei_1.jpg\',
            \'uri\' => \'public://kmei_1_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'5671\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422005581\',
            \'type\' => \'image\',
            \'uuid\' => \'7f752a91-4db7-47fb-a6b6-e092775d8319\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'380\',
              \'height\' => \'185\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'380\',
            \'height\' => \'185\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421227726\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'141\',
        \'source\' => \'node/132\',
        \'alias\' => \'kolozsvári-magyar-egyetemi-intézet\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1007\',
      \'uid\' => \'3\',
      \'title\' => \'Kolozsvár 2015\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e62fdfcb-bb1b-4294-83d5-3002830093fa\',
      \'nid\' => \'1007\',
      \'type\' => \'organizations\',
      \'language\' => \'ro\',
      \'created\' => \'1423228144\',
      \'changed\' => \'1423228144\',
      \'tnid\' => \'886\',
      \'translate\' => \'0\',
      \'uuid\' => \'c13b62d5-1986-4ae2-81a5-d55cb8daa6e9\',
      \'revision_timestamp\' => \'1423228144\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Cluj-Napoca urmează să fie Capitala Europeană de Tineret în anul 2015, titlu câstigat într-o competiție la care au participat 49 de țări europene.&nbsp;<br />\\r\\n<br />\\r\\nMISIUNE ȘI OBIECTIVE<br />\\r\\nMisiunea Programului este de a întări rolul și sprijinul acordat tinerilor și organizaţiilor de tineret și pentru tineret în participarea activă a acestora în schimbarea societăţii printr-un proces de dezvoltare urbană sustenabilă, responsabilă și inclusivă, prin împărtășirea spaţiului, culturii, puterii, muncii, bucuriei, viziunii și valorilor europene comune, abordând teme precum responsabilizarea și susținerea tinerilor, mobilitatea, informarea și dialogul structurat în cadrul unui program de un an în Cluj-Napoca.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Cluj-Napoca urmează să fie Capitala Europeană de Tineret în anul 2015, titlu câstigat într-o competiție la care au participat 49 de țări europene. </p>\\n<p>MISIUNE ȘI OBIECTIVE<br />\\nMisiunea Programului este de a întări rolul și sprijinul acordat tinerilor și organizaţiilor de tineret și pentru tineret în participarea activă a acestora în schimbarea societăţii printr-un proces de dezvoltare urbană sustenabilă, responsabilă și inclusivă, prin împărtășirea spaţiului, culturii, puterii, muncii, bucuriei, viziunii și valorilor europene comune, abordând teme precum responsabilizarea și susținerea tinerilor, mobilitatea, informarea și dialogul structurat în cadrul unui program de un an în Cluj-Napoca.</p>\\n",
          ),
        ),
      ),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://ro.cluj2015.eu/\',
            \'title\' => \'cluj2015.eu\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'609\',
            \'uid\' => \'4\',
            \'filename\' => \'logo_1.jpg\',
            \'uri\' => \'public://logo_1_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'5449\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422004759\',
            \'type\' => \'image\',
            \'uuid\' => \'780258ac-a95d-4db3-bf8a-52a85f40a9d1\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'380\',
              \'height\' => \'185\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'380\',
            \'height\' => \'185\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1423228144\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1018\',
        \'source\' => \'node/1007\',
        \'alias\' => \'kolozsvár-2015\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'159\',
      \'uid\' => \'3\',
      \'title\' => \'Legyen támogatónk!\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f71e2208-f3fd-4978-a967-bba730f8f9e8\',
      \'nid\' => \'159\',
      \'type\' => \'gtk_simple_page\',
      \'language\' => \'hu\',
      \'created\' => \'1421229330\',
      \'changed\' => \'1421835870\',
      \'tnid\' => \'159\',
      \'translate\' => \'0\',
      \'uuid\' => \'c749691d-32bb-4ab1-aa01-ae99bf7432a2\',
      \'revision_timestamp\' => \'1421835870\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">A Gazdasági Tanácsadó Klub kimondott célja, hogy az egyetemi képzésben résztvevő hallgatók számára egy olyan gyakorlati jellegű szakmai többletet és tapasztalatot nyújtson, amely segítségével tagjaink, az egyetemi képzés elvégzése után, nagyobb sikerrel válhatnak gyakorló, vállalati szakemberekké, vállalkozókká vagy menedzserekké. Ahhoz azonban, hogy jól képzett és a gyakorlati szférában a helyüket megálló pályakezdőket képezzünk, szükségünk van a vállalati és akadémiai szférával való együttműködésre és az Önök támogatásra.</p>\\r\\n\\r\\n<div>\\r\\n<div>\\r\\n<p class=\\"rtejustify\\">Amennyiben Ön, mint magánszemély vagy jogi személyi képviselő, képzésünkhöz személyi jövedelemadója 2%-ának felajánlásával vagy más anyagi jellegű támogatással hozzá szeretne járulni, ezt tisztelettel és lehetőségeink szerint nyilvános köszönetnyilvánítással fogadjuk.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Amennyiben Ön, mint vállalati döntéshozó, gyakorló szakember vagy a reál szférában jelentős gyakorlati tapasztalattal rendelkező egyetemi oktató, fontosnak tartja, hogy a megfelelő színvonalú és gyakorlatias „utánpótlásképzést” tudásával, tapasztalatai megosztásával támogassa, akkor szívesen fogadjuk a támogatását (az alábbiak közül bármilyen formában):</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li class=\\"rtejustify\\">Üzleti témájú előadás megtartása hallgatóink számára,</li>\\r\\n\\t<li class=\\"rtejustify\\">Menedzsment shadowing lehetőségek biztosítása,</li>\\r\\n\\t<li class=\\"rtejustify\\">Más, a céljainknak megfelelő együttműködési lehetőségek felajánlása.</li>\\r\\n</ul>\\r\\n\\r\\n<p class=\\"rtejustify\\">Támogatási szándékát kérjük, jelezze az&nbsp;<a href=\\"http://us.mc448.mail.yahoo.com/mc/compose?to=office@gtk.ro\\" target=\\"_blank\\">office@gtk.ro</a>&nbsp;e-mail címen.</p>\\r\\n</div>\\r\\n</div>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">A Gazdasági Tanácsadó Klub kimondott célja, hogy az egyetemi képzésben résztvevő hallgatók számára egy olyan gyakorlati jellegű szakmai többletet és tapasztalatot nyújtson, amely segítségével tagjaink, az egyetemi képzés elvégzése után, nagyobb sikerrel válhatnak gyakorló, vállalati szakemberekké, vállalkozókká vagy menedzserekké. Ahhoz azonban, hogy jól képzett és a gyakorlati szférában a helyüket megálló pályakezdőket képezzünk, szükségünk van a vállalati és akadémiai szférával való együttműködésre és az Önök támogatásra.</p>\\n<p class=\\"rtejustify\\">Amennyiben Ön, mint magánszemély vagy jogi személyi képviselő, képzésünkhöz személyi jövedelemadója 2%-ának felajánlásával vagy más anyagi jellegű támogatással hozzá szeretne járulni, ezt tisztelettel és lehetőségeink szerint nyilvános köszönetnyilvánítással fogadjuk.</p>\\n<p class=\\"rtejustify\\">Amennyiben Ön, mint vállalati döntéshozó, gyakorló szakember vagy a reál szférában jelentős gyakorlati tapasztalattal rendelkező egyetemi oktató, fontosnak tartja, hogy a megfelelő színvonalú és gyakorlatias „utánpótlásképzést” tudásával, tapasztalatai megosztásával támogassa, akkor szívesen fogadjuk a támogatását (az alábbiak közül bármilyen formában):</p>\\n<ul><li class=\\"rtejustify\\">Üzleti témájú előadás megtartása hallgatóink számára,</li>\\n<li class=\\"rtejustify\\">Menedzsment shadowing lehetőségek biztosítása,</li>\\n<li class=\\"rtejustify\\">Más, a céljainknak megfelelő együttműködési lehetőségek felajánlása.</li>\\n</ul><p class=\\"rtejustify\\">Támogatási szándékát kérjük, jelezze az <a href=\\"http://us.mc448.mail.yahoo.com/mc/compose?to=office@gtk.ro\\" target=\\"_blank\\">office@gtk.ro</a> e-mail címen.</p>\\n",
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_simple_pages\' => array(),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421229330\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'168\',
        \'source\' => \'node/159\',
        \'alias\' => \'legyen-támogatónk\',
        \'language\' => \'hu\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Legyen támogatónk!\',
        \'mlid\' => 0,
        \'plid\' => \'512\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'2\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1006\',
      \'uid\' => \'3\',
      \'title\' => \'Kolozsvár 2015\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'32edece9-d945-4444-bd47-f3da7513d76e\',
      \'nid\' => \'1006\',
      \'type\' => \'organizations\',
      \'language\' => \'en\',
      \'created\' => \'1423228070\',
      \'changed\' => \'1423228070\',
      \'tnid\' => \'886\',
      \'translate\' => \'0\',
      \'uuid\' => \'cdc2ec17-ec2e-45c1-ae0b-232a75a1b9a5\',
      \'revision_timestamp\' => \'1423228070\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Cluj-Napoca is the European Youth Capital in 2015, a title won during a competition that had 49 European countries as participants.<br />\\r\\n<br />\\r\\n<strong>MISSIONS AND OBJECTIVES</strong><br />\\r\\nThe program’s mission is to support youngsters and youth organizations in their active participation in changing the society through a sustainable, responsible and inclusive urban development process. Through sharing space, culture, power, work, joy, faith, vision and common European values, by approaching topics like youth responsibility and structured dialogue during one year program in Cluj-Napoca.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Cluj-Napoca is the European Youth Capital in 2015, a title won during a competition that had 49 European countries as participants.</p>\\n<p><strong>MISSIONS AND OBJECTIVES</strong><br />\\nThe program’s mission is to support youngsters and youth organizations in their active participation in changing the society through a sustainable, responsible and inclusive urban development process. Through sharing space, culture, power, work, joy, faith, vision and common European values, by approaching topics like youth responsibility and structured dialogue during one year program in Cluj-Napoca.</p>\\n",
          ),
        ),
      ),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.cluj2015.eu/\',
            \'title\' => \'kolozsvar2015.eu\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'609\',
            \'uid\' => \'4\',
            \'filename\' => \'logo_1.jpg\',
            \'uri\' => \'public://logo_1_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'5449\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422004759\',
            \'type\' => \'image\',
            \'uuid\' => \'780258ac-a95d-4db3-bf8a-52a85f40a9d1\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'380\',
              \'height\' => \'185\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'380\',
            \'height\' => \'185\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1423228070\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1017\',
        \'source\' => \'node/1006\',
        \'alias\' => \'kolozsvár-2015\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'139\',
      \'uid\' => \'3\',
      \'title\' => \'East Grain\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'13923d2b-64ea-4d0f-8f14-faff27335f47\',
      \'nid\' => \'139\',
      \'type\' => \'organizations\',
      \'language\' => \'hu\',
      \'created\' => \'1421228088\',
      \'changed\' => \'1422005519\',
      \'tnid\' => \'139\',
      \'translate\' => \'0\',
      \'uuid\' => \'d0bcb3e9-e111-427d-8afd-8b6a12c9166b\',
      \'revision_timestamp\' => \'1422005519\',
      \'revision_uid\' => \'4\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">Vállalatunk 2007-ben került bejegyzésre, azóta foglalkozik gabona, olajosmag és takarmányalapanyag kereskedelemmel főképp a romániai illetve magyarországi piacokon. Cégünk tevékenységének és sikerességének alapját a tulajdonosok és munkatársak igen széleskörű, főképp Közép-Kelet Európai régióban szerzett mezőgazdasági, feldolgozóipari(malom, takarmánygyártás és állattenyésztés) és gabonakereskedelmi tapasztalata képezi.</p>\\r\\n\\r\\n<blockquote>\\r\\n<p class=\\"rtejustify\\">Az alapítás évét követően fokozatosan növekedő vállalatunk a 2011-es üzleti évben 50.000 tonna árut mozgatott meg, amihez egy 10 millió euró fölötti éves árbevétel társul.</p>\\r\\n</blockquote>\\r\\n\\r\\n<p class=\\"rtejustify\\">Számos malommal és takarmánykeverő üzemmel való többéves múltra visszatekintő stratégiai kapcsolatoknak, és az ezáltal szerzett tapasztalatnak köszönhetően, kijelenthetjük, hogy az East Grain legfőbb termékei a malmi búza és a kukorica: ezt tartjuk a stratégiai fókuszunk központi elemének. Ezen kívül cégünkön belül igen jelentős az olajosmag kereskedelem, de foglalkozunk egyéb szántóföldi terményekkel( árpa, rozs, durumbuza) és takarmányipari alapanyagok( szója, napra, repce darák, buza-kukorica korpa, DDGS stb.) széles skálájával is.</p>\\r\\n\\r\\n<blockquote>\\r\\n<p class=\\"rtejustify\\">Üzleti víziónk legfontosabb eleme a hosszútávú gondolkodás/tervezés, melyre nagyon nagy hangsúlyt fektetünk minden partneri kapcsulatunkban, ennek eredménye pedig az, hogy legfőbb partnereink jelentős részével alapításunk óta együtt dolgozunk.</p>\\r\\n</blockquote>\\r\\n\\r\\n<p class=\\"rtejustify\\">A hosszútávú kapcsolatok kialakításában igen fontosnak tartjuk a szakértelmünk mellett, partnereinknek a finanszírozási és áruszállítmányozási igényeit kielégíteni.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">Vállalatunk 2007-ben került bejegyzésre, azóta foglalkozik gabona, olajosmag és takarmányalapanyag kereskedelemmel főképp a romániai illetve magyarországi piacokon. Cégünk tevékenységének és sikerességének alapját a tulajdonosok és munkatársak igen széleskörű, főképp Közép-Kelet Európai régióban szerzett mezőgazdasági, feldolgozóipari(malom, takarmánygyártás és állattenyésztés) és gabonakereskedelmi tapasztalata képezi.</p>\\n<blockquote><p class=\\"rtejustify\\">Az alapítás évét követően fokozatosan növekedő vállalatunk a 2011-es üzleti évben 50.000 tonna árut mozgatott meg, amihez egy 10 millió euró fölötti éves árbevétel társul.</p>\\n</blockquote>\\n<p class=\\"rtejustify\\">Számos malommal és takarmánykeverő üzemmel való többéves múltra visszatekintő stratégiai kapcsolatoknak, és az ezáltal szerzett tapasztalatnak köszönhetően, kijelenthetjük, hogy az East Grain legfőbb termékei a malmi búza és a kukorica: ezt tartjuk a stratégiai fókuszunk központi elemének. Ezen kívül cégünkön belül igen jelentős az olajosmag kereskedelem, de foglalkozunk egyéb szántóföldi terményekkel( árpa, rozs, durumbuza) és takarmányipari alapanyagok( szója, napra, repce darák, buza-kukorica korpa, DDGS stb.) széles skálájával is.</p>\\n<blockquote><p class=\\"rtejustify\\">Üzleti víziónk legfontosabb eleme a hosszútávú gondolkodás/tervezés, melyre nagyon nagy hangsúlyt fektetünk minden partneri kapcsulatunkban, ennek eredménye pedig az, hogy legfőbb partnereink jelentős részével alapításunk óta együtt dolgozunk.</p>\\n</blockquote>\\n<p class=\\"rtejustify\\">A hosszútávú kapcsolatok kialakításában igen fontosnak tartjuk a szakértelmünk mellett, partnereinknek a finanszírozási és áruszállítmányozási igényeit kielégíteni.</p>\\n",
          ),
        ),
      ),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.eastgrain.ro/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'619\',
            \'uid\' => \'4\',
            \'filename\' => \'eastgrainlogo_0.jpg\',
            \'uri\' => \'public://eastgrainlogo_0_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'5907\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422005519\',
            \'type\' => \'image\',
            \'uuid\' => \'72216ab3-43b3-407c-a769-9b7be0e4797a\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'381\',
              \'height\' => \'185\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'381\',
            \'height\' => \'185\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421228088\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'148\',
        \'source\' => \'node/139\',
        \'alias\' => \'east-grain\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1283\',
      \'uid\' => \'3\',
      \'title\' => \'East Consulting\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9d434756-fbb9-4632-8218-5d5423e9c8d2\',
      \'nid\' => \'1283\',
      \'type\' => \'organizations\',
      \'language\' => \'en\',
      \'created\' => \'1425040906\',
      \'changed\' => \'1425040906\',
      \'tnid\' => \'135\',
      \'translate\' => \'0\',
      \'uuid\' => \'de18ddd6-89d1-44c3-8fac-123e555c734a\',
      \'revision_timestamp\' => \'1425040906\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_organization_link\' => array(),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'624\',
            \'uid\' => \'4\',
            \'filename\' => \'eastlogo_0_0.jpg\',
            \'uri\' => \'public://eastlogo_0_0_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'5753\',
            \'status\' => \'1\',
            \'timestamp\' => \'1422005820\',
            \'type\' => \'image\',
            \'uuid\' => \'1dc20243-8743-4d35-af56-30186b7f1b4d\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'380\',
              \'height\' => \'185\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'380\',
            \'height\' => \'185\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1425040906\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'1295\',
        \'source\' => \'node/1283\',
        \'alias\' => \'east-consulting\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'117\',
      \'uid\' => \'3\',
      \'title\' => \'GTK Középsikolás Program\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'bd1ca67a-5756-4e3a-bdfb-37175c9224b0\',
      \'nid\' => \'117\',
      \'type\' => \'gtk_simple_page\',
      \'language\' => \'hu\',
      \'created\' => \'1421226355\',
      \'changed\' => \'1421226355\',
      \'tnid\' => \'117\',
      \'translate\' => \'0\',
      \'uuid\' => \'df83f980-88f0-4265-a883-4bb11e78c764\',
      \'revision_timestamp\' => \'1421226355\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">A GTK Középiskolás Program a Gazdasági Tanácsadó Klub 2014-ben indított programja, melynek célcsoportját - első lépésben - a&nbsp;<strong>kolozsvári középiskolák diákjai</strong>&nbsp;képezik. A programot a GTK koordinátorai és alumni tagjai irányítják és ültetik gyakorlatba.</p>\\r\\n\\r\\n<div>\\r\\n<div>\\r\\n<p class=\\"rtejustify\\">A GTK Középiskolás Program&nbsp;<strong>céljai</strong>:</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li class=\\"rtejustify\\">Az üzleti tervezés oktatásán keresztül egy olyan&nbsp;<strong>gyakorlatias gazdasági tudás átadása</strong>, mely a középiskola padjaiban elsajátított elméleti közgazdaságtani és vállalkozástani ismereteket egészíti ki</li>\\r\\n\\t<li class=\\"rtejustify\\">A diákok jövőbeni szakmai profiljától függetlenül az&nbsp;<strong>üzleti logika elsajátításához</strong>&nbsp;szükséges alapok biztosítása, amelyek hozzásegítik a résztvevőket jövőbeni üzleti (vagy akár nem üzleti jellegű) céljaik eléréséhez</li>\\r\\n\\t<li class=\\"rtejustify\\">Hosszú távon a Gazdasági Tanácsadó Klub tagjainak&nbsp;<strong>szakmai diverzifikációja</strong></li>\\r\\n</ul>\\r\\n\\r\\n<p class=\\"rtejustify\\">A féléves program öt, a GTK alumni tagjai által tartott, előadásból épül fel. Minden előadás után a programban résztvevő diákok csapatokban részfeladatokat kapnak kidolgozásra, melyet határidőre kell teljesítsenek. A részfeladatok értékelésre kerülnek, mely értékelés beleszámít a végső eredménybe. A részfeladatokat az előadók nem csak értékelik, hanem javaslatokat is megfogalmaznak azok továbbfejlesztésére.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Az program felépítése:</p>\\r\\n\\r\\n<ol>\\r\\n\\t<li class=\\"rtejustify\\">Vállalkozói magatartás, vállalkozás, vállalkozási ötlet és iparági elemzés</li>\\r\\n\\t<li class=\\"rtejustify\\">Működési terv és emberi erőforrás menedzsment</li>\\r\\n\\t<li class=\\"rtejustify\\">Marketing</li>\\r\\n\\t<li class=\\"rtejustify\\">Pénzügy</li>\\r\\n\\t<li class=\\"rtejustify\\">Prezentációtechnika</li>\\r\\n</ol>\\r\\n\\r\\n<p class=\\"rtejustify\\">A program végén minden résztvevő csapat lehetőséget kap a saját vállalkozás-ötletéhez elkészített&nbsp;<strong>üzleti terv prezentálására</strong>&nbsp;egy egyetemi és vállalati szakemberekből álló zsűri előtt. A legjobb tervek jutalomban részesülnek.</p>\\r\\n</div>\\r\\n</div>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">A GTK Középiskolás Program a Gazdasági Tanácsadó Klub 2014-ben indított programja, melynek célcsoportját - első lépésben - a <strong>kolozsvári középiskolák diákjai</strong> képezik. A programot a GTK koordinátorai és alumni tagjai irányítják és ültetik gyakorlatba.</p>\\n<p class=\\"rtejustify\\">A GTK Középiskolás Program <strong>céljai</strong>:</p>\\n<ul><li class=\\"rtejustify\\">Az üzleti tervezés oktatásán keresztül egy olyan <strong>gyakorlatias gazdasági tudás átadása</strong>, mely a középiskola padjaiban elsajátított elméleti közgazdaságtani és vállalkozástani ismereteket egészíti ki</li>\\n<li class=\\"rtejustify\\">A diákok jövőbeni szakmai profiljától függetlenül az <strong>üzleti logika elsajátításához</strong> szükséges alapok biztosítása, amelyek hozzásegítik a résztvevőket jövőbeni üzleti (vagy akár nem üzleti jellegű) céljaik eléréséhez</li>\\n<li class=\\"rtejustify\\">Hosszú távon a Gazdasági Tanácsadó Klub tagjainak <strong>szakmai diverzifikációja</strong></li>\\n</ul><p class=\\"rtejustify\\">A féléves program öt, a GTK alumni tagjai által tartott, előadásból épül fel. Minden előadás után a programban résztvevő diákok csapatokban részfeladatokat kapnak kidolgozásra, melyet határidőre kell teljesítsenek. A részfeladatok értékelésre kerülnek, mely értékelés beleszámít a végső eredménybe. A részfeladatokat az előadók nem csak értékelik, hanem javaslatokat is megfogalmaznak azok továbbfejlesztésére.</p>\\n<p class=\\"rtejustify\\">Az program felépítése:</p>\\n<ol><li class=\\"rtejustify\\">Vállalkozói magatartás, vállalkozás, vállalkozási ötlet és iparági elemzés</li>\\n<li class=\\"rtejustify\\">Működési terv és emberi erőforrás menedzsment</li>\\n<li class=\\"rtejustify\\">Marketing</li>\\n<li class=\\"rtejustify\\">Pénzügy</li>\\n<li class=\\"rtejustify\\">Prezentációtechnika</li>\\n</ol><p class=\\"rtejustify\\">A program végén minden résztvevő csapat lehetőséget kap a saját vállalkozás-ötletéhez elkészített <strong>üzleti terv prezentálására</strong> egy egyetemi és vállalati szakemberekből álló zsűri előtt. A legjobb tervek jutalomban részesülnek.</p>\\n",
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_simple_pages\' => array(),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421226355\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'126\',
        \'source\' => \'node/117\',
        \'alias\' => \'gtk-középsikolás-program\',
        \'language\' => \'hu\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Középiskolás program\',
        \'mlid\' => 0,
        \'plid\' => \'499\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-47\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'119\',
      \'uid\' => \'3\',
      \'title\' => \'GTK Program pentru Liceeni\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'3e560b2f-07d0-41f4-8bab-8cd3e50657a9\',
      \'nid\' => \'119\',
      \'type\' => \'gtk_simple_page\',
      \'language\' => \'ro\',
      \'created\' => \'1421226442\',
      \'changed\' => \'1421226442\',
      \'tnid\' => \'117\',
      \'translate\' => \'0\',
      \'uuid\' => \'e1619653-7d5a-4f2a-b0c8-11f90a23dfbe\',
      \'revision_timestamp\' => \'1421226442\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtejustify\\">La începutul anului 2014 GTK - Business Consulting Club a lansat un program de dezvoltare profesională pentru liceeni. Programul a fost iniţiat şi este realizat de către coordonatorii şi membrii alumni ai organizaţiei GTK - Business Consulting Club, având ca grup ţintă principal&nbsp;<strong>studenţii din liceele din Cluj-Napoca</strong>.</p>\\r\\n\\r\\n<div>\\r\\n<div>\\r\\n<p class=\\"rtejustify\\">Obiectivele programului:</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li class=\\"rtejustify\\">Oferirea unor&nbsp;<strong>cunoştinţe şi abilităţi practice în domeniul planificării unei afaceri</strong>, care să completeze cunoştinţele teoretice dobândite de-a lungul anilor de liceu în cadrul disciplinelor de ştiinţe economice şi antreprenoriat</li>\\r\\n\\t<li class=\\"rtejustify\\">Asigurarea condiţiilor pentru&nbsp;<strong>însuşirea bazelor gândirii antreprenoriale</strong>, care să contribuie la realizarea obiectivelor studenţilor în viitor, indiferent de profilul profesional ales</li>\\r\\n\\t<li class=\\"rtejustify\\"><strong>Diversificarea&nbsp;</strong>pe termen lung a&nbsp;<strong>profilului profesional</strong>&nbsp;al organizaţiei GTK - Business Consulting Club</li>\\r\\n</ul>\\r\\n\\r\\n<p class=\\"rtejustify\\">Programul este alcătuit din cinci cursuri ţinute de membrii alumni ai organizaţiei. Studenţii lucrează în echipe pentru a dezvolta un plan propriu de afaceri, şi primesc sarcini ce trebuie rezolvate la următorul termen limită. Soluţiile echipelor sunt verificate şi evaluate pe parcurs de către instructori.</p>\\r\\n\\r\\n<p class=\\"rtejustify\\">Structura programului:</p>\\r\\n\\r\\n<ol>\\r\\n\\t<li class=\\"rtejustify\\">Antreprenoriat, întreprindere, ideea de afaceri, analiza pieţei (click&nbsp;<a href=\\"http://gtk.ro/ro/blog/Kozepiskolas2014-1-RO\\" style=\\"padding: 0px; margin: 0px; color: rgb(0, 90, 140);\\">aici</a>&nbsp;pentru a vedea reportajul)</li>\\r\\n\\t<li class=\\"rtejustify\\">Plan operaţional, managementul resurselor umane</li>\\r\\n\\t<li class=\\"rtejustify\\">Marketing</li>\\r\\n\\t<li class=\\"rtejustify\\">Finanţe</li>\\r\\n\\t<li class=\\"rtejustify\\">Technici de prezentare</li>\\r\\n</ol>\\r\\n\\r\\n<p class=\\"rtejustify\\">La finalul programului echipele vor avea posibilitatea&nbsp;<strong>să prezinte planul lor de afaceri în faţa unui juriu</strong>&nbsp;format din experţi din sfera academică şi economică.</p>\\r\\n</div>\\r\\n</div>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p class=\\"rtejustify\\">La începutul anului 2014 GTK - Business Consulting Club a lansat un program de dezvoltare profesională pentru liceeni. Programul a fost iniţiat şi este realizat de către coordonatorii şi membrii alumni ai organizaţiei GTK - Business Consulting Club, având ca grup ţintă principal <strong>studenţii din liceele din Cluj-Napoca</strong>.</p>\\n<p class=\\"rtejustify\\">Obiectivele programului:</p>\\n<ul><li class=\\"rtejustify\\">Oferirea unor <strong>cunoştinţe şi abilităţi practice în domeniul planificării unei afaceri</strong>, care să completeze cunoştinţele teoretice dobândite de-a lungul anilor de liceu în cadrul disciplinelor de ştiinţe economice şi antreprenoriat</li>\\n<li class=\\"rtejustify\\">Asigurarea condiţiilor pentru <strong>însuşirea bazelor gândirii antreprenoriale</strong>, care să contribuie la realizarea obiectivelor studenţilor în viitor, indiferent de profilul profesional ales</li>\\n<li class=\\"rtejustify\\"><strong>Diversificarea </strong>pe termen lung a <strong>profilului profesional</strong> al organizaţiei GTK - Business Consulting Club</li>\\n</ul><p class=\\"rtejustify\\">Programul este alcătuit din cinci cursuri ţinute de membrii alumni ai organizaţiei. Studenţii lucrează în echipe pentru a dezvolta un plan propriu de afaceri, şi primesc sarcini ce trebuie rezolvate la următorul termen limită. Soluţiile echipelor sunt verificate şi evaluate pe parcurs de către instructori.</p>\\n<p class=\\"rtejustify\\">Structura programului:</p>\\n<ol><li class=\\"rtejustify\\">Antreprenoriat, întreprindere, ideea de afaceri, analiza pieţei (click <a href=\\"http://gtk.ro/ro/blog/Kozepiskolas2014-1-RO\\">aici</a> pentru a vedea reportajul)</li>\\n<li class=\\"rtejustify\\">Plan operaţional, managementul resurselor umane</li>\\n<li class=\\"rtejustify\\">Marketing</li>\\n<li class=\\"rtejustify\\">Finanţe</li>\\n<li class=\\"rtejustify\\">Technici de prezentare</li>\\n</ol><p class=\\"rtejustify\\">La finalul programului echipele vor avea posibilitatea <strong>să prezinte planul lor de afaceri în faţa unui juriu</strong> format din experţi din sfera academică şi economică.</p>\\n",
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_simple_pages\' => array(),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421226442\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'128\',
        \'source\' => \'node/119\',
        \'alias\' => \'gtk-program-pentru-liceeni\',
        \'language\' => \'ro\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Program pentru liceeni\',
        \'mlid\' => 0,
        \'plid\' => \'522\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'3\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => TRUE,
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'885\',
      \'uid\' => \'3\',
      \'title\' => \'Communitas Alapítvány\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'3a87a212-4c10-49cb-87ad-eb0a81ac7e52\',
      \'nid\' => \'885\',
      \'type\' => \'organizations\',
      \'language\' => \'hu\',
      \'created\' => \'1421758104\',
      \'changed\' => \'1421758104\',
      \'tnid\' => \'885\',
      \'translate\' => \'0\',
      \'uuid\' => \'f11d3ecf-7b74-4e4a-9bc3-931b1f9ba135\',
      \'revision_timestamp\' => \'1421758104\',
      \'revision_uid\' => \'3\',
      \'field_body\' => array(),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.communitas.ro/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'482\',
            \'uid\' => \'3\',
            \'filename\' => \'communitas_15ev_fekvo.png\',
            \'uri\' => \'public://communitas_15ev_fekvo.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'93659\',
            \'status\' => \'1\',
            \'timestamp\' => \'1421758104\',
            \'type\' => \'image\',
            \'uuid\' => \'d35a50db-99dd-4d3a-8472-5e6c693054f3\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'976\',
              \'height\' => \'636\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'976\',
            \'height\' => \'636\',
          ),
        ),
      ),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421758104\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'896\',
        \'source\' => \'node/885\',
        \'alias\' => \'communitas-alapítvány\',
        \'language\' => \'hu\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'7\',
      \'uid\' => \'3\',
      \'title\' => \'BBTE\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'73b4c9e6-f4f1-4a54-9578-fe12394d66b4\',
      \'nid\' => \'7\',
      \'type\' => \'organizations\',
      \'language\' => \'ro\',
      \'created\' => \'1421170670\',
      \'changed\' => \'1421189097\',
      \'tnid\' => \'7\',
      \'translate\' => \'0\',
      \'uuid\' => \'f2ec0c19-cbbe-471e-bd58-c55569894fbc\',
      \'revision_timestamp\' => \'1421189097\',
      \'revision_uid\' => \'4\',
      \'field_body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>bjkgd</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>bjkgd</p>\\n",
          ),
        ),
      ),
      \'field_is_partner\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'field_organization_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://hu.econ.ubbcluj.ro/\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_organization_logo\' => array(),
      \'metatags\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1421170670\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'3\',
      \'comment_count\' => \'0\',
      \'name\' => \'user_tartalom\',
      \'picture\' => \'0\',
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:18:"htmlmail_plaintext";i:0;}\',
      \'path\' => array(
        \'pid\' => \'16\',
        \'source\' => \'node/7\',
        \'alias\' => \'bbte\',
        \'language\' => \'ro\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
