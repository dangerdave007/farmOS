<?php
/**
 * @file
 * farm_livestock.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function farm_livestock_taxonomy_default_vocabularies() {
  return array(
    'farm_animal_types' => array(
      'name' => 'Farm Animal Species/Breeds',
      'machine_name' => 'farm_animal_types',
      'description' => 'A vocabulary of farm animal species and breeds.',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
